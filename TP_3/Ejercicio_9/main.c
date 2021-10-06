/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 3 - Funciones
 *          Ejercicio 1.9
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    19/5/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int resultado=0;
    int numero,sistema=0;

    printf("Ingrese el numero a descomponer: ");
    scanf("%d",&numero);
    printf("Ingrese el sistema de numeracion: ");
    scanf("%d",&sistema);
    
    resultado=descomponer_numero(numero,sistema);
    
    if(resultado==-2)
    {
        printf("Ha ingresado un numero invalido\n");
    }
    else
    {
        if(resultado==-1)
        {
            printf("Ha ingresado un sistema de numeración invalido\n");  
        }
        else
        {
            printf("\nCantidad de bits necesarios: %d\n",resultado);
        }
    }
    return 0;
}
