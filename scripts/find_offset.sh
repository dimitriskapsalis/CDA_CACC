#!/bin/sh

x=0
while [ 1 ]
do
./veh_rcv -A 172.16.0.120 -a 172.16.1.120 -u 15000 -v -o $x &
$x=$(($x+1))
sleep 2
slay veh_rcv
echo $x ###################################################################
done
