/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 3 - Funciones
 *          Ejercicio 1.19
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    22/5/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int temp;
    temp=comparacion_temperatura();
    if(temp != -1) // La funcion comparacion_temperatura devuelve -1 si no hubo valores coincidentes
    {
        printf("Se ha encontrado un valor coincidente en ambas escalas.\nVALOR COINCIDENTE: %d (°C y °F)\n",temp);
    }
    else
    {
        printf("No se ha encontrado ningun valor coincidente.\n");
    }
    return 0;
}
