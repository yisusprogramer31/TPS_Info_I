/*!
 * @file   funciones.c
 * @brief  Copia de array con memoria dinamica
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   20/6/2021
 */
#include <stdio.h>
#include <stdlib.h>

int* copiar_arreglo(const int* arreglo, int largo)
{   
    int* arry_cpy = NULL, i;

    if(arreglo == NULL)
    {
        return NULL;
    }
    
    arry_cpy = (int*) malloc(largo * sizeof(int));
    if(arry_cpy == NULL)
    {
        return NULL;
    }
    // Copia el array
    for(i=0; i < largo; i++)
    {
        arry_cpy[i] = arreglo[i];
    }
    return arry_cpy; 
}
