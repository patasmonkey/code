#!/bin/sh

gcc -E $1.c -o $1.i
C_Front $1.i > $1.xml 
python3 kakikuwae_root_copy.py
C_Back output.xml >out.c
