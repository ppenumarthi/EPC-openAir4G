#!/bin/bash
################################
# include helper functions
################################
THIS_SCRIPT_PATH=$(dirname $(readlink -f $0))
. $THIS_SCRIPT_PATH/utils.bash
. $THIS_SCRIPT_PATH/interfaces.bash
. $THIS_SCRIPT_PATH/networks.bash


create_tun_interface eth0:oai0;
#test_network

