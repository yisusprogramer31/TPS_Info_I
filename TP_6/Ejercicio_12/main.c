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
#define SIZE 20
int main(void)
{
    char palabra[25];
    int resultado;

    printf("Ingrese la palabra: ");
    fgets(palabra, SIZE, stdin);
    printf("Antes: %s",palabra);
    resultado = invertidor_de_palabras(palabra);
    
    if(resultado == -2)
    {
        printf("Error. Puntero NULL\n");
    }
    else if(resultado == 0)
    {
        printf("Error al invertir la palabra\n");
    }
    else
    {
        printf("Despues (INVERTIDA): %s\n",palabra);
    }
    return 0;
}
