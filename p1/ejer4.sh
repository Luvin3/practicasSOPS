#!/bin/bash
echo "Número de procesos que se están ejecutando en el sistema"
top -b -n 1 | awk 'NR==2 {print "Cantidad de procesos:\t"$2}'
