/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 11 - Manejo de archivos
 *          Ejercicio 11.2
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    23/09/2021
 * @details Para compilar, linkear y ejecutar: Ver Makefile
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define NOMBRE_ORIGEN "origen.txt"
#define MODO_ORIGEN "r"

#define NOMBRE_DESTINO "ENCODED.txt"
#define MODO_DESTINO "w+"

int main(void)
{
    FILE* origen = NULL, *destino = NULL;
    int estado;
    char c;

    origen = fopen(NOMBRE_ORIGEN, MODO_ORIGEN);
    destino = fopen(NOMBRE_DESTINO, MODO_DESTINO);
    // Verifico que no retornen NULL
    if(origen != NULL && destino != NULL) 
    {   
        //Imprimo contenido del archivo origen
        printf("Imprimiendo contenido archivo origen:\n");
        while((c = fgetc(origen)) != EOF)
        {
            printf("%c", c);
        }
        printf("\n");
        rewind(origen);
        // Invoco a la funcion para encriptar el archivo
        estado = encriptado(origen, destino);
        if(estado != ERROR)
        {
            //Imprimo contenido del archivo destino
            printf("\nImprimiendo contenido archivo encriptado:\n");
            while((c = fgetc(destino)) != EOF)
            {
                printf("%c", c);
            }
        }
        else
        {
            printf("Ha ocurrido un error al encriptar el archivo\n");
        }
        printf("\n");
        fclose(origen);
        fclose(destino);
    }
    else
    {
        printf("Ha ocurrido un error al crear o abrir un archivo\n");
    }
    return 0;
}