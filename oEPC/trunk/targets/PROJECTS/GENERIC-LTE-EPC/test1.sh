#!/bin/bash
################################
# include helper functions
################################
THIS_SCRIPT_PATH=$(dirname $(readlink -f $0))
. $THIS_SCRIPT_PATH/utils.bash
. $THIS_SCRIPT_PATH/interfaces.bash
. $THIS_SCRIPT_PATH/networks.bash


#create_tun_interface eth0:oai0;
#test_network

echo "ping for \$MME_IPV4_ADDRESS_FOR_S1_MME";
MME_IPV4_ADDRESS_FOR_S1_MME=192.168.1.1;
ping -q -c 1 $MME_IPV4_ADDRESS_FOR_S1_MME
#ping -q -c 1 192.168.1.1; 
if [ $? -ne 0 ]; then echo "ping FAILED for \$MME_IPV4_ADDRESS_FOR_S1_MME"; 
                 else echo "ping is succesful for \$MME_IPV4_ADDRESS_FOR_S1_MME"; fi;
#test_local_iperf $ENB_IPV4_ADDRESS_FOR_S1_MME  $MME_IPV4_ADDRESS_FOR_S1_MME
#if [ $? -ne 0 ]; then echo "ping FAILED for \$MME_IPV4_ADDRESS_FOR_S1_MME"; 
