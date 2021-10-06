/*!
 * @file   funciones.c
 * @brief  Funciones del modulo de lista de espera telefonica
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   23/09/2021
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones.h"

void ingreso_datos(cliente_t* cliente, int largo)
{
    printf("Ingrese el nombre del cliente: ");
    get_string(cliente->nombre, LARGO_STRING);

    printf("Ingrese el apellido del cliente: ");
    get_string(cliente->apellido, LARGO_STRING);

    printf("Ingrese la edad del cliente: ");
    scanf("%hd", &cliente->edad);
    clear_newlines();

    // Genera el numero de atencion aleatorio que es unico para cada cliente 
    cliente->numero = largo;
}

int ingresar_cola(cliente_t** cola, int* largo, cliente_t* cliente)
{
    cliente_t* aux = NULL;
    int i;

    if(cola == NULL || largo == NULL || cliente == NULL || *largo < 0)
    {
        return ERROR;
    }
    (*largo)++;
    aux = *cola;
    *cola = (cliente_t*) realloc(*cola, *largo * sizeof(cliente_t));
    if(*cola == NULL)
    {
        free(aux);
        return ERROR_MEM;
    }
    for(i = *largo-1; i > 0; i--)
    {
        *(*cola + i) = *(*cola + i - 1);
    }
    **cola = *cliente;

    return EXITO; 
}

int localizar_cliente(cliente_t* cola, int largo, int numero)
{
    int i, flag = 0, retorno = 0;

    if(cola == NULL || largo <= 0)
    {
        return ERROR;
    }
    for(i = 0; i < largo; i++)
    {
        if((cola + i)->numero == numero)
        {
            flag = 1;
            retorno = i;
        }
    }
    if(flag == 0)
    {
        retorno = ERROR_BUSQUEDA;
    }
    return retorno;
}

int atender_cola(cliente_t** cola, int* largo, int indice)
{
    int i;
    cliente_t* aux;

    if(cola == NULL || largo == NULL || *largo <= 0 || indice < 0)
    {
        return ERROR;
    }
    for(i = indice; i < *largo-1; i++)
    {
        *(*cola + i) = *(*cola + i + 1);
    }
    (*largo)--;
    aux = *cola;
    *cola = (cliente_t*) realloc(*cola, *largo * sizeof(cliente_t));
    if(*cola == NULL && *largo != 0)
    {
        free(aux);
        return ERROR_MEM;
    } 
    return EXITO;
}

void imprimir_cliente(cliente_t* cliente)
{
    printf("---------------------------\n");
    printf("Imprimiendo cliente....\n");
    printf("\tNombre: %s\n", cliente->nombre);
    printf("\tApellido: %s\n", cliente->apellido);
    printf("\tEdad: %d\n", cliente->edad);
    printf("\tNro. de atencion: %d\n", cliente->numero);
    printf("---------------------------\n");
}

/* ------------------------------------------------------------------------------------------------ */

void clear_newlines(void)
{
    int c;

    do
    {
        c = getchar();
    } while(c != '\n' && c != EOF);
}

void get_string(char* string, int largo)
{
    char* c;
    fgets(string, largo, stdin);
    c = strrchr(string, '\n');
    if(c != NULL)
    {
        *c = '\0';
    }
}
