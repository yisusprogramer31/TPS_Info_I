/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 8 - Argumentos del main
 *          Ejercicio 8.8
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    27/6/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{   
    srand48(time(NULL));

    double valor_inicial = atof(argv[1]);
    double valor_final = atof(argv[2]);
    int muestras = atoi(argv[3]);

    for(int i=0; i < muestras; i++)
    {
        printf("%.5lf\n", drand48() * (valor_final - valor_inicial) + valor_inicial);
    }

    return 0;
}
