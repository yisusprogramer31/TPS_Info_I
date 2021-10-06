/*!
 * @file   funciones.c
 * @brief  Funciones principales del modulo
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   25/09/2021
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define MIN_CARACTERES 5 // Cant de caracteres minimos que puede tener cada registro

int generar_array(gente_t** array, int* registros, FILE* archivo)
{
    char* buffer = NULL, *match = NULL;
    gente_t* aux = NULL;
    size_t cant = 0;
    ssize_t count = 0;
    
    if(array == NULL || archivo == NULL || registros == NULL || *registros < 0)
    {
        return ERROR;
    }

    /* Uso getline para obtener cada linea del registro. El bucle termina cuando llega al final del archivo
    Si al final del archivo hay varios saltos de linea. Directamente corta el bucle */
    while((count = getline(&buffer, &cant, archivo)) != EOF && count > MIN_CARACTERES)
    {
        // Cambio el caracter \n por el \0
        match = strchr(buffer, '\n');
        if(match != NULL)
        {
            *match = '\0';
        }
        // Reservo memoria para el array dinamico
        (*registros)++;
        aux = *array;
        *array = (gente_t*) realloc(*array, *registros* sizeof(gente_t));
        if(*array == NULL)
        {
            free(aux);
            return ERROR_MEM;
        }
        generar_copia((*array + *registros-1), buffer);
    }
    free(buffer);

    return EXITO;
}

void generar_copia(gente_t* array, char* buffer)
{
    char* token = NULL;
    if(array != NULL && buffer != NULL)
    {
        // Realizo la copia del buffer al array dinamico
        token = strtok(buffer, ",");
        strcpy(array->nombre, token);
        
        token = strtok(NULL, ",");
        strcpy(array->apellido, token);
            
        token = strtok(NULL, "\0");
        array->calificacion = atoi(token);
    }
}

int clasificar_calificaciones(gente_t* array, int registros, int* calificaciones)
{
    int i;
    if(array == NULL || registros <= 0 || calificaciones == NULL)
    {
        return ERROR; 
    }
    // Inicializo el vector en 0
    for(i = 0; i < CANT_NOTAS; i++)
    {
        calificaciones[i] = 0;
    }
    // Asigno notas al vector
    for(i = 0; i < registros; i++)
    {
        // Verifico que la nota del campo de la estructura sea valida
        if(array[i].calificacion >= 0 && array[i].calificacion <= CANT_NOTAS)
        {
            calificaciones[array[i].calificacion]++;
        }
        else
        {
            return ERROR;
        }
    }  
    return EXITO;
}

void imprimir_array(gente_t* array, int registros)
{
    int i;
    printf("------------------------------------------\n");
    for(i = 0; i < registros; i++)
    {
        printf("%s %s %d\n", array[i].nombre, array[i].apellido, array[i].calificacion);
    }
    printf("------------------------------------------\n");
}





