#!/bin/bash

if [ $# -ne 1 ]
then
	echo "Numar de parametri gresit"
	exit 1
fi

if [ $1 == "py" ]
then
	python3 zar.py
elif [ $1 == "c" ]
then
	gcc -Wall -Wextra zar.c -o main; ./main; rm ./main
else
	echo "Parametru invalid"
	exit 1
fi

