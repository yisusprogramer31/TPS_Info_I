/*!
 * @file   funciones.c
 * @brief  Funcion descomponer segundos
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   27/5/2021
 */
#include <stdio.h>

void a_sexagesimal(int total_segundos, int* horas, int* minutos, int* segundos)
{
    if(horas == NULL || minutos == NULL || segundos == NULL)
    {
        printf("Puntero NULO!\n");
    }
    else
    {
        int resto;
        *horas = total_segundos/3600;
        resto = total_segundos%3600;
        *minutos = resto/60;
        *segundos = resto%60;
    }
}
