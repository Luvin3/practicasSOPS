#!/bin/bash
echo "Mostrar la cantidad de memoria (en GBytes) que tiene la computadora"
 awk '/MemTotal:/ {print "MemTotal: " $2/(1024^2)" GBytes"}' /proc/meminfo 
