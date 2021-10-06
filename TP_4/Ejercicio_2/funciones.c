/*!
 * @file   funciones.c
 * @brief  Promedio de dos numeros pasados por valor
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   27/5/2021
 */
#include <stdio.h>

void promedio(int x, int y, float* resultado)
{
    if(resultado == NULL)
    {
        printf("Puntero NULO\n");
    }
    else
    {
        *resultado = (x+y)/2;
    }
}

