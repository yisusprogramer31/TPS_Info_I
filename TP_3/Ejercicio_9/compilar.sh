#!/bin/bash

# Descripcion: Script para compilar y linkear el ejercicio
# Autor: Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
#
# Para ejecutar: 
#   Opcion 1) bash compilar.sh
#   Opcion 2) chmod +x compilar.sh
#             ./compilar.sh

gcc main.c funciones.c -o ejecutable -Wall
./ejecutable

