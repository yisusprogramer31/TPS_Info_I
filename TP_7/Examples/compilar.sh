#!/bin/bash

# MI BASH PARA INFO 1
# MEMORIA DINAMICA

clear

rm ejecutable

gcc test.c -o ejecutable -Wall

echo "Compilado!"

echo "Valgrind? ---> 1 | Sin Valgrind ---> 0"

read valor

echo -e

if [ $valor = 1 ]; then
    valgrind ./ejecutable
else
    ./ejecutable
fi

echo -e

exit

