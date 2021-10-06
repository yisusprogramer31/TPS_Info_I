/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 4 - Punteros
 *          Ejercicio 4.5
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    27/5/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"

int main(void)
{
    int cant_segundos;
    int horas,minutos,segundos;
    int* p=NULL;
    int* q=NULL;
    int* r=NULL;
    p=&horas;
    q=&minutos;
    r=&segundos;
    
    printf("Ingrese la cantidad de segundos: ");
    scanf("%d",&cant_segundos);
    a_sexagesimal(cant_segundos,p,q,r);
    printf("%d segundos son: %d horas %d minutos %d segundos\n",cant_segundos,horas,minutos,segundos);
}
