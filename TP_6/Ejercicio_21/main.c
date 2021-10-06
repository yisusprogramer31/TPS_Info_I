/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 6 - Strings
 *          Ejercicio 6.21
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    17/6/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "funciones.h"
#include <string.h>

int main(void)
{   
    // Cambio semilla
    srand( getpid() );
    
    char oracion[60];;
    int result, i;

    result = gen_oracion(oracion);
    
    if(result == 1)
    {
        // Imprimo 10 oraciones aleatorias
        for(i = 0; i < 10; i++)
        {
            gen_oracion(oracion);
            printf("Oracion %d: ", i+1);
            puts(oracion);
        }  
    }
    else
    {
        printf("Puntero NULL\n");
    }
    return 0;
}
