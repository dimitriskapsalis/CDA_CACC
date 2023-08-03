#!/bin/sh

IPADDR=`ifconfig en0 | grep "inet " |gawk '{print $2}'` 
DSRCADDR=`echo $IPADDR | sed '{s/172.16.0/172.16.1/g}'` 

slay -f argonne_cacc
slay -f prius_can
slay -f veh_snd
slay -f veh_rcv
slay -f can_tx
slay -f can_rx
slay -f clt_vars_prius
slay -f db_slv
cd /home/qnxuser/path_can_bin
./db_slv -Q -S `hostname` &
sleep 1	
./clt_vars_prius &
sleep 1	
./can_rx -p 1 -cv >can1_rx_out.txt &
sleep 1
./can_tx -i 0x99 -s 2 -p 1 -t 0.02 -v -n 4000 >can_tx_out_brake.txt &
sleep 1	
./veh_rcv -A $IPADDR -a $DSRCADDR -u 15000 -v -o 3 >veh_rcv_out.txt &
sleep 1	
./veh_snd -A $IPADDR -a $DSRCADDR -u 1516 >veh_snd_out.txt &
sleep 1	
./prius_can -v >prius_can_out.txt &
sleep 1
./argonne_cacc  >/home/qnxuser/data/argonne_cacc.txt &
tail -f /home/qnxuser/data/argonne_cacc.txt