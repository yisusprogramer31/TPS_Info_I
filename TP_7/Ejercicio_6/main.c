/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 7 - Memoria Dinamica
 *          Ejercicio 7.6
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    20/6/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define LARGO 10

int main(void)
{
    int array[LARGO] = {0,1,2,3,4,5,6,7,8,9}, *copia_array, i;

    printf("Array origen: ");
    for(i=0; i < LARGO; i++)
    {
        printf(" %d",array[i]);
    }
    printf("\n");
    
    copia_array = copiar_arreglo(array, LARGO);
    if(copia_array == NULL)
    {
        printf("No se pudo reservar la cantidad de memoria solicitada\n");
    }
    else
    {
        printf("Array copiado: ");
        for(i=0; i < LARGO; i++)
        {
            printf(" %d",copia_array[i]);
        }
        printf("\n");
    }
    free(copia_array);
    return 0;
}
