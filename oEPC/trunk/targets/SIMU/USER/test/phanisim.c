#include <unistd.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cblas.h>
#include <execinfo.h>

#include "event_handler.h"
#include "SIMULATION/RF/defs.h"
#include "PHY/types.h"
#include "PHY/defs.h"
#include "PHY/LTE_TRANSPORT/proto.h"
#include "PHY/vars.h"
#include "MAC_INTERFACE/vars.h"

#include "UTIL/OCG/OCG_extern.h"
#include "cor_SF_sim.h"
#include "UTIL/OMG/omg_constants.h"
#include "UTIL/FIFO/pad_list.h"

#include "assertions.h"

#if defined(ENABLE_ITTI)
# include "intertask_interface.h"
# include "create_tasks.h"
#endif

void
oai_shutdown (void);

void
help (void) {
    printf ("This is a  sample program that checks onlythreading part of the itti messaging with S1-U interface\n");

}

pthread_t log_thread;

void
log_thread_init () {
    //create log_list
    //log_list_init(&log_list);
#ifndef LOG_NO_THREAD

    log_shutdown = 0;

    if ((pthread_mutex_init (&log_lock, NULL) != 0)
                    || (pthread_cond_init (&log_notify, NULL) != 0)) {
        return;
    }

    if (pthread_create (&log_thread, NULL, log_thread_function, (void*) NULL)
                    != 0) {
        log_thread_finalize ();
        return;
    }
#endif

}

//Call it after the last LOG call
int
log_thread_finalize () {
    int err = 0;

#ifndef LOG_NO_THREAD

    if (pthread_mutex_lock (&log_lock) != 0) {
        return -1;
    }

    log_shutdown = 1;

    /* Wake up LOG thread */
    if ((pthread_cond_broadcast (&log_notify) != 0)
                    || (pthread_mutex_unlock (&log_lock) != 0)) {
        err = -1;
    }
    if (pthread_join (log_thread, NULL) != 0) {
        err = -1;
    }
    if (pthread_mutex_unlock (&log_lock) != 0) {
        err = -1;
    }

    if (!err) {
        //log_list_free(&log_list);
        pthread_mutex_lock (&log_lock);
        pthread_mutex_destroy (&log_lock);
        pthread_cond_destroy (&log_notify);
    }
#endif

    return err;
}

#if defined(ENABLE_ITTI)
static void set_cli_start(module_id_t module_idP, uint8_t start) {
    if (module_idP < NB_eNB_INST) {
        oai_emulation.info.cli_start_enb[module_idP] = start;
    } else {
        oai_emulation.info.cli_start_ue[module_idP - NB_eNB_INST] = start;
    }
}
#endif

static void *
sigh (void *arg) {

    int signum;
    sigset_t sigcatch;
    sigemptyset (&sigcatch);
    sigaddset (&sigcatch, SIGHUP);
    sigaddset (&sigcatch, SIGINT);
    sigaddset (&sigcatch, SIGTERM);
    sigaddset (&sigcatch, SIGQUIT);

    for (;;) {
        sigwait (&sigcatch, &signum);
        //sigwait(&sigblock, &signum);
        switch (signum) {
            case SIGHUP:
            case SIGINT:
            case SIGTERM:
            case SIGQUIT:
                fprintf (stderr, "received signal %d \n", signum);
                // no need for mutx: when ITTI not used, this variable is only accessed by this function
                //l2l1_state = L2L1_TERMINATED;
                break;
            default:
                fprintf (stderr, "Unexpected signal %d \n", signum);
                exit (-1);
                break;
        }
    }
    pthread_exit (NULL);
}




/*------------------------------------------------------------------------------*/
int
main (int argc, char **argv) {

    int32_t i;
    // pointers signal buffers (s = transmit, r,r0 = receive)
    clock_t t;

    //FILE *SINRpost;
    //char SINRpost_fname[512];
    // sprintf(SINRpost_fname,"postprocSINR.m");
    //SINRpost = fopen(SINRpost_fname,"w");
    // variables/flags which are set by user on command-line


    //Default values if not changed by the user in get_simulation_options();

#if !defined(ENABLE_ITTI)
    pthread_t tid;
    int err;

    if ((err = pthread_sigmask (SIG_BLOCK, &sigblock, NULL)) != 0) {
        printf ("SIG_BLOCK error\n");
        return -1;
    }
    if (pthread_create (&tid, NULL, sigh, NULL)) {
        printf ("Pthread for tracing Signals is not created!\n");
        return -1;
    } else {
        printf ("Pthread for tracing Signals is created!\n");
    }
#endif 

    LOG_N(EMU,
          ">>>>>>>>>>>>>>>>>>>>>>>>>>> OAIEMU initialization done <<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");

#if defined(ENABLE_ITTI)
    // Handle signals until all tasks are terminated
    if (create_phani_tasks(oai_emulation.info.nb_enb_local, oai_emulation.info.nb_ue_local) >= 0) {
        itti_wait_tasks_end();
    } else {
        exit(-1); // need a softer mode
    }
#endif
    LOG_N(EMU,
          ">>>>>>>>>>>>>>>>>>>>>>>>>>> OAIEMU Ending <<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");

    raise (SIGINT);
    oai_shutdown ();

    return (0);
}


void
oai_shutdown (void) {
        return;

    LOG_N(EMU,
          ">>>>>>>>>>>>>>>>>>>>>>>>>>> OAIEMU shutdown <<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
}


OAI_Emulation*
get_OAI_emulation () {
    return &oai_emulation;
}
