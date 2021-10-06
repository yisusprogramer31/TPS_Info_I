/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 7 - Memoria Dinamica
 *          Ejercicio 7.20
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    21/6/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>

int main(void)
{   
    int i = 0;
    char* string;
    
    printf("Ingrese el string: ");
    string = obtener_string();
    
    if(string == NULL)
    {
        printf("No se pudo realizar la operacion\n");
    }
    else
    {   // Imprimo el string
        while(string[i] != '\0')
        {
            printf("Letra: %c\n",string[i]);
            i++;
        }
    }
    free(string);
    
    return 0;
}
