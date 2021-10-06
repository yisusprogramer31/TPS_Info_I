/*!
 * @file   funciones.c
 * @brief  Funciones para encriptar texto
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   23/09/2021
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define CONST_ENCRIPTADO 13

int encriptado(FILE* origen, FILE* destino)
{
    char* buffer = NULL;
    int i = 0, estado;

    if(origen == NULL || destino == NULL)
    {
        return ERROR;
    }
    estado = crear_buffer(&buffer, origen);
    if(estado == ERROR)
    {
        printf("Error al crear el buffer\n");
        return estado;
    }
    // Realizo el proceso de encriptado
    while(buffer[i] != '\0')
    {
        if(buffer[i] >= 'a' && buffer[i] <= 'm')
        {
            buffer[i] += CONST_ENCRIPTADO;
        }
        else if(buffer[i] >= 'n' && buffer[i] <= 'z')
        {
            buffer[i] -= CONST_ENCRIPTADO;
        }
        i++;
    }
    // Copio el contenido del buffer al destino
    fprintf(destino, "%s", buffer);
    rewind(destino);
    free(buffer);

    return EXITO;   
}

int crear_buffer(char** buffer, FILE* archivo)
{
    int cantidad = 0, i = 0;
    
    if(buffer == NULL || archivo == NULL)
    {
        return ERROR;
    }
    // Cuento la cantidad de caracteres para despues asignar memoria a buffer
    while(feof(archivo) == 0)
    {
        fgetc(archivo);
        cantidad++;
    }
    rewind(archivo);
    *buffer = (char*) malloc(cantidad * sizeof(char));
    if(*buffer == NULL)
    {
        return ERROR;
    }
    // Copio el contenido del archivo al buffer
    while(feof(archivo) == 0)
    {
        (*buffer)[i] = fgetc(archivo);
        i++;
    }
    (*buffer)[i-1] = '\0';
    
    return EXITO;
}





