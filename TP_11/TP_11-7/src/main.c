/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 11 - Archivos
 *          Ejercicio 11.7
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    25/09/2021
 * @details Para compilar, linkear y ejecutar: Ver Makefile
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

/* 
Formato para lectura correcta del archivo:
    jesus,maresca,8
    javier,ballofet,10
    hector,spartano,1
*/

#define ARCHIVO "gente.csv"
#define MODO "r"

int main(void)
{
    FILE* file = NULL;
    gente_t* array = NULL;
    int i, estado, registros = 0, calificaciones[CANT_NOTAS];

    file = fopen(ARCHIVO, MODO);
    if(file == NULL)
    {
        printf("Ha ocurrido un error al leer el archivo\n");
        return ERROR;
    }

    estado = generar_array(&array, &registros, file);
    fclose(file);

    if(estado == ERROR)
    {
        printf("Ha ocurrido un error\n");
        return ERROR;
    }
   
    printf("Cant registros: %d\nImprimiendo registros:\n", registros);
    imprimir_array(array, registros);
        
    estado = clasificar_calificaciones(array, registros, calificaciones);
    if(estado != ERROR)
    {
        printf("Imprimiendo resumen de notas:\n");
        for(i = 0; i < CANT_NOTAS; i++)
        {
            printf("Nota %d -> Cantidad = %d \n", i, calificaciones[i]);
        }
    }
    else
    {
        printf("Se ha ingresado una nota invalida\n");
    }
    free(array);

    return 0;
}
