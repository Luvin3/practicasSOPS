#!/bin/bash
echo "Los 3 procesos que consumen más CPU"
ps -Ao user,uid,comm,pid,pcpu,tty --sort=-pcpu | head -n 4
