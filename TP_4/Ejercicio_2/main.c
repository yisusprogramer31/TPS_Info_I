/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 4 - Punteros
 *          Ejercicio 4.3
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    27/5/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int a,b;
    float rta;

    printf("Ingrese un numero entero: ");
    scanf("%d",&a);
    printf("Ingrese otro numero entero: ");
    scanf("%d",&b);

    promedio(a,b,&rta);
    printf("El promedio de %d y %d es: %.2f\n",a,b,rta);
}
