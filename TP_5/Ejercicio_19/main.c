/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 5 - Arrays
 *          Ejercicio 5.19
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    7/6/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include "funciones.h"
#define FILAS 4
#define COLUMNAS 3

int main(void)
{
    double matriz_a[FILAS][COLUMNAS], matriz_b[FILAS][COLUMNAS], matriz_resultado[FILAS][COLUMNAS];
    int result; // Variable que indica el resultado de la funcion computar matriz
    char operacion;

    // Ingreso de elementos de matriz A
    printf("Ingrese las componentes de la matriz A: \n");
    array_scan(&matriz_a[0][0], FILAS, COLUMNAS);
    // Ingreso de elementos de matriz B
    printf("Ingrese las componentes de la matriz B: \n");
    array_scan(&matriz_b[0][0], FILAS, COLUMNAS);
    printf("Ingrese la operacion a realizar: ");
    scanf(" %c",&operacion);
    
    // Imprime ambas matrices A y B
    printf("Matriz A\n");
    array_print(&matriz_a[0][0], FILAS, COLUMNAS);
    printf("Matriz B\n");
    array_print(&matriz_b[0][0], FILAS, COLUMNAS);
    

    result = computar_matriz_matriz(&matriz_a[0][0], &matriz_b[0][0], FILAS, COLUMNAS, operacion, &matriz_resultado[0][0]);

    // Si devuelve 0 la funcion, es porque todo salio bien y devuelve la matriz resultado
    if(result == 0)
    {
        printf("Matriz resultante: (A %c B)\n", operacion);
        array_print(&matriz_resultado[0][0], FILAS, COLUMNAS);
    }
    else if(result == -1)
    {
        printf("Error en la operacion. Division por cero\n");
    }
    else if(result == -3)
    {
        printf("Operador invalido\n");
    }
    else if(result == -2)
    {
        printf("Punteros NULL\n");
    }
    return 0;
}
