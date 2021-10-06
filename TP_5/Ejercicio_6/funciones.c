/*!
 * @file   funciones.c
 * @brief  Copia de arrays
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   4/6/2021
 */
#include <stdio.h>

int array_copy(float* arreglo_destino, int largo_destino, const float* arreglo_origen, int largo_origen)
{
    int i=0;
    
    // Verifico si alguno de los punteros es NULL
    if(arreglo_destino == NULL || arreglo_origen == NULL) 
    {
        return -2;
    }
    else
    {
        // Verifico si el largo del array destino es mas chico que el origen. Si es asi no se realiza la copia
        if(largo_destino < largo_origen) 
        {
            return -1;
        }
        else
        {
            // Realizo la copia 
            while(i < largo_origen)
            {
                arreglo_destino[i] = arreglo_origen[i];
                i++;
            }
            // Devuelvo la cantidad de bytes copiados. Seria el tipo de dato del array (float) por la cantidad de elementos copiados
            return (sizeof(float) * i);
        }
    }
    return 0;
}

void print_array(const float* arreglo, int largo)
{
    int i;
    for(i=0; i<largo; i++)
    {
        printf("%f  ",arreglo[i]);
    }
    printf("\n");
}


