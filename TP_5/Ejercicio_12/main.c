/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 5 - Arreglos
 *          Ejercicio 5.12
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    6/6/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"
#define ANGULO_LIMITE 2

int main(void)
{
    double vector_mira[3] = {7,0,0};
    double vector_enemigo[3] = {-7,-1,0};
    int apuntado;

    apuntado = esta_apuntando_al_enemigo(vector_mira, vector_enemigo, ANGULO_LIMITE);
    if(apuntado == 0)
    {
        printf("El enemigo no esta siendo apuntado por el jugador\n");
        printf("INTENTÁ APUNTAR MEJOR AL ENEMIGO PARA MATARLO !\n");
    }
    // Devuelve -1 si alguno de los punteros es nulo
    else if(apuntado == -1) 
    {
        printf("Punteros NULL\n");
    }
    else
    {
        printf("El enemigo esta siendo apuntado por el jugador\n");
        printf("DALE, YA LO TENES, DISPARÁ !\n");
    }
    return 0;
}
