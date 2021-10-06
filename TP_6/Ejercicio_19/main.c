/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 6 - Strings
 *          Ejercicio 6.12
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    14/6/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"
#define LARGO_FRASE 50

int main(void)
{   
    char frase[51];
    int result;

    printf("Ingrese la palabra a codificar en CESAR: ");
    fgets(frase, LARGO_FRASE, stdin);

    result = a_cesar(frase);

    if(result == 1)
    {
        printf("Frase codificada en CESAR: %s\n",frase);
    }
    else if(result == 0)
    {
        printf("Error en la codificacion\n");
    }
    else if(result == -2)
    {
        printf("Puntero NULL!\n");
    }
    return 0;
}
