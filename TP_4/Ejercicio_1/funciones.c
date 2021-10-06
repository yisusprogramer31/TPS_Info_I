/*!
 * @file   funciones.c
 * @brief  Funcion que incrementa en 1 unidad el valor del numero ingresado
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   26/5/2021
 */
#include <stdio.h>

void incrementar(int* numero)
{
    if(numero == NULL)
    {
        printf("Puntero NULO\n");
    }
    else
    {
        *numero = *numero+1;
    } 
}


