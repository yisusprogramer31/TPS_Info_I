/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 7 - Memoria Dinamica
 *          Ejercicio 7.13
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    22/6/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void)
{   
    int numero, resultado, i=0;
    char* cadena;
    
    printf("Ingrese el numero entero a convertir en string: ");
    scanf("%d",&numero);

    resultado = itostr(numero, &cadena);
    
    if(resultado == -1)
    {
        printf("Error\n");
    }
    else
    {
        printf("Numero ingresado: %d\n",numero);
        while(cadena[i] != '\0')
        {
            printf("%c\n",cadena[i]);
            i++;
        }
    }
    free(cadena);
    return 0;
}
