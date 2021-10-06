#!/bin/bash

# MI BASH PARA INFO 1
# MEMORIA DINAMICA

clear

rm ejecutable

gcc main.c -o ejecutable -Wall

echo "Compilado!"

echo "Valgrind? ---> 1 | Sin Valgrind ---> 0"

read valor

if [ $valor = 1 ]; then
    valgrind ./ejecutable
else
    ./ejecutable 192.168.1.1:5021
fi

exit

