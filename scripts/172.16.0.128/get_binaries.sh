#!/bin/sh

echo "Must execute as qnxuser"
cd /home/qnxuser/path_can_bin
scp jspring@172.16.0.150:/windows/Linux/Argonne_CACC/argonne_cacc/qnx/argonne_cacc .
scp jspring@172.16.0.150:/windows/Linux/Argonne_CACC/accord/can/src/qnx/clt_vars_accord .
scp jspring@172.16.0.150:/windows/Linux/Argonne_CACC/accord/can/src/qnx/accord_can .
scp jspring@172.16.0.150:/windows/Linux/Argonne_CACC/vehcomm/qnx/veh_snd .
scp jspring@172.16.0.150:/windows/Linux/Argonne_CACC/vehcomm/qnx/veh_rcv .
scp jspring@172.16.0.150:/windows/Linux/Argonne_CACC/taurus/can/src/qnx/clt_vars_taurus .
scp jspring@172.16.0.150:/windows/Linux/Argonne_CACC/taurus/can/src/qnx/taurus_can .
scp jspring@172.16.0.150:/windows/Linux/Argonne_CACC/prius/can/src/qnx/clt_vars_prius .
scp jspring@172.16.0.150:/windows/Linux/Argonne_CACC/prius/can/src/qnx/prius_can .
