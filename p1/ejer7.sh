#!/bin/bash
unset pass_secreto
echo
PROMPT="Introduzca su contraseña: "
while IFS= read -p "$PROMPT" -r -s -n 1 char; do
	if [[ $char == $'\0' ]]; then
	       break
	fi 
	PROMPT='*'
	pass_secreto+="$char"
done
echo

varNum=$(echo $pass_secreto | grep [0-9] | wc -l)

varSimb=$(echo $pass_secreto | grep ['@','#','$','%','&','*','+','-','='] | wc -l)
bandera="true"
if [ $varNum -eq 0 ];then 
	echo "No tiene numeros"
	bandera="false"
fi 
if [$varSimb -eq 0 ];then
        echo "No tiene simbolos"
        bandera="false"
fi

tam=${#pass_secreto}
if  [ $tam -lt 8 ];then
	echo "La contraseña debe de tener almenos 8 caracteres"
	bandera="false"
fi

if [ "$bandera" = "true" ]; then
	echo "CONTRASEÑA VALIDA" 
     else
	echo "CONTRASEÑA INVALIDA"
 fi
echo "La contraseña introducida fue: $pass_secreto"

