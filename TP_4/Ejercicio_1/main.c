/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 4 - Punteros
 *          Ejercicio 4.1
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    26/5/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int number;
    
    printf("Ingrese un numero: ");
    scanf("%d",&number);
    printf("Numero anterior = %d\n",number);
    incrementar(&number); 
    printf("Numero actual = %d\n",number);

    return 0;
}
