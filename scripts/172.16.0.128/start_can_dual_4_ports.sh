#!/bin/sh

slay can_dual
can_dual -k E2D65CE4C81D4D13C9A8D3B5 -B 0x00 -b 0x1c -C 0x00 -c 0x1c -d1 -n CANDRV1 &
can_dual -k E2D65CE4C81D4D13C9A8D3B5 -B 0x00 -b 0x1c -C 0x00 -c 0x1c -d2 -n CANDRV2 &
