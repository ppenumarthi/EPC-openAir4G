#!/bin/bash
################################
# include helper functions
################################
THIS_SCRIPT_PATH=$(dirname $(readlink -f $0))
. $THIS_SCRIPT_PATH/build_helper.bash

set_openair_env
check_for_root_rights

echo_info "Starting to compile"
output= compile_epc 
epc_compiled=$?
echo_info "Finishing to compile"
    if [ $epc_compiled -ne 0 ]; then
        echo_error "EPC compilation failed : check the installation log file bin/install_log.txt"
        exit 1
    fi
    check_for_epc_executable
    echo_info "finished epc target: check the installation log file bin/install_log.txt"
declare CONFIG_FILE_ACCESS_OK=0
    if [ $CONFIG_FILE_ACCESS_OK -eq 0 ]; then
        echo_error "You have to provide a EPC config file"
        exit 1
    fi

    rm -f /tmp/source.txt
    VARIABLES=" S6A_CONF\|\
           REALM"

    VARIABLES=$(echo $VARIABLES | sed -e 's/\\r//g')
    VARIABLES=$(echo $VARIABLES | tr -d ' ')
    cat $CONFIG_FILE | grep -w "$VARIABLES"| tr -d " " | tr -d ";" > /tmp/source.txt
    source /tmp/source.txt

    if [ x"$REALM" == "x" ]; then
        echo_error "Your config file do not contain a REALM for S6A configuration"
        exit 1
    fi
    if [ x"$S6A_CONF" != "x./epc_s6a.conf" ]; then
        echo_error "Your config file do not contain the good path for the S6A config file,"
        echo_error "accordingly to what is done in this script, it should be set to epc_s6a.conf"
        exit 1

