#!/bin/bash
pkill -P 2792
iptables -P INPUT ACCEPT
iptables -F INPUT
iptables -P OUTPUT ACCEPT
iptables -F OUTPUT
iptables -P FORWARD ACCEPT
iptables -F FORWARD
iptables -t nat -F
iptables -t mangle -F
iptables -t filter -F
iptables -t raw -F
ip route flush cache
rmmod iptable_raw
rmmod iptable_mangle
rmmod iptable_nat
rmmod iptable_filter
rmmod ip_tables
rmmod xt_state xt_mark xt_GTPUAH xt_GTPURH  xt_tcpudp xt_connmark ipt_LOG ipt_MASQUERADE
rmmod x_tables
rmmod nf_conntrack_netlink nfnetlink nf_nat nf_conntrack_ipv4 nf_conntrack
