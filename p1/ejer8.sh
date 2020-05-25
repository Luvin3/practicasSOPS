#!/bin/bash
echo "Fecha y hora     Nombre"
echo "de modificacion"

ls -ltr | awk '{ print $7" "$6" "$8"\t  "$9 }'
