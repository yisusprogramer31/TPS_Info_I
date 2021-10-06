/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 5 - Arreglos
 *          Ejercicio 5.6
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    6/6/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"
#define LARGO_DESTINO 10 // Longitud del array destino
#define LARGO_ORIGEN 10 // Longitud del array origen

int main(void)
{
    int bytes,i;
    // Inicializo los arrays. El origen de numeros tipo float aleatorios
    float array_origen[LARGO_ORIGEN] = {3.14, 3.15, 3.16, 3.17, 3.18, 3.19, 3.20, 3.21, 3.22, 3.23}; 
    
    // Inicializo los arrays. El destino todos en 0
    float array_destino[LARGO_DESTINO];
    for(i=0; i<LARGO_DESTINO; i++) 
    {
        array_destino[i] = 0;
    }

    // Imprimo ambos arrays antes de invocar a la funcion
    printf("Array origen antes: ");
    print_array(array_origen,LARGO_ORIGEN);
    printf("Array destino antes: ");
    print_array(array_destino,LARGO_DESTINO);

    bytes = array_copy(array_destino, LARGO_DESTINO, array_origen, LARGO_ORIGEN);

    if(bytes == -1)
    {
        printf("\nNo se ha podido realizar la copia. El tamaño del array destino es insuficiente\n\n");
    }
    else if(bytes == -2)
    {
        printf("\nPunteros NULL\n\n");
    }
    else
    {
        // Imprimo arrays despues de haber invocado a la funcion
        printf("\nArray origen despues: ");
        print_array(array_origen,LARGO_ORIGEN);
        printf("Array destino despues: ");
        print_array(array_destino,LARGO_DESTINO);
        printf("\nLa cantidad de bytes copiados es: %d\n\n",bytes);
    }
    return 0;
}
