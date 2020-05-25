#!/bin/bash
echo "Cantidad de cores: "
 awk '/cores/' /proc/cpuinfo

echo "Cantidad de procesadores"
grep processor /proc/cpuinfo | wc -l
