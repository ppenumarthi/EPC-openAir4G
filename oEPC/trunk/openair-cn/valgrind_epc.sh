#!/bin/sh
valgrind --tool=memcheck --leak-check=full --show-reachable=yes --num-callers=20 --track-origins=yes --track-fds=yes ./objs/OAI_EPC/oai_epc /home/phanik/oEPC/trunk/targets/PROJECTS/GENERIC-LTE-EPC/te/epc.mme0.conf>leakage
