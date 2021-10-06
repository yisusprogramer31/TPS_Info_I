/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 3 - Funciones
 *          Ejercicio 1.22
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    23/5/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    float n1,n2,resultado;
    char operacion;

    printf("Ingrese 1 numero: ");
    scanf("%f",&n1);
    printf("Ingrese 2 numero: ");
    scanf("%f",&n2);
    printf("Ingrese operacion: ");
    scanf(" %c",&operacion);

    resultado = calculadora(n1,n2,operacion);
    if(n2!=0)
    {
        printf("Operacion realizada: %f %c %f = %f\n",n1,operacion,n2,resultado);
    }
}
