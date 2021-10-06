/*!
 * @file   funciones.c
 * @brief  Funciones principales del modulo operador de cuentas bancarias
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   1/09/2021
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funciones.h"
#include "funciones_propias.h"

int cuentas_agregar(cuenta_t** cuentas, int* cantidad_cuentas, cuenta_t* cuenta)
{
    cuenta_t *aux = NULL;

    if(cuenta == NULL || cantidad_cuentas == NULL || *cantidad_cuentas < 0)
    {
        return ERROR;
    }
    // Si la cantidad de usuarios registrados es cero, primero uso MALLOC
    if(*cantidad_cuentas == 0)
    {
        *cuentas = (cuenta_t*) malloc(sizeof(cuenta_t));
        if(*cuentas == NULL)
        {
            return ERROR_MEM;
        }
        // Realizo las copias de los datos
        (*cuentas)[*cantidad_cuentas] = *cuenta;
        // Seteo la cantidad de dinero en 0
        (*cuentas)[*cantidad_cuentas].dinero = 0;
        // Seteo el tiempo de ultima actividad de la cuenta
        (*cuentas)[*cantidad_cuentas].tiempo = time(NULL);
        
        (*cantidad_cuentas)++;
    }
    // Si la cantidad de usuarios registrados es mayor a 0, uso REALLOC para redimensionar el array
    else if(*cantidad_cuentas > 0)
    {
        aux = *cuentas;
        *cuentas = (cuenta_t*) realloc(*cuentas, (*cantidad_cuentas + 1) * sizeof(cuenta_t));
        if(*cuentas == NULL)
        {
            free(aux);
            return ERROR_MEM;
        }
        // Realizo las copias de los datos
        (*cuentas)[*cantidad_cuentas] = *cuenta;
        // Seteo la cantidad de dinero en 0
        (*cuentas)[*cantidad_cuentas].dinero = 0;
        // Seteo el tiempo de ultima actividad de la cuenta
        (*cuentas)[*cantidad_cuentas].tiempo = time(NULL);

        (*cantidad_cuentas)++;
    }
    return EXITO;  
}

int cuentas_eliminar(cuenta_t** cuentas, int* cantidad_cuentas, char* usuario)
{
    int i = 0, flag = 0;
    cuenta_t *aux = NULL;

    if(cuentas == NULL || usuario == NULL || *cantidad_cuentas <= 0)
    {
        return ERROR; 
    }

    while(flag == 0 && i < *cantidad_cuentas)
    {
        // Verifica cada nombre de usuario de cada cuenta
        if(strcasecmp((*cuentas + i)->usuario, usuario) == 0)
        {
            // Reordeno el array dinamico en caso de ser necesario 
            reordenar_cuentas(*cuentas, *cantidad_cuentas, i);
            (*cantidad_cuentas)--;
            aux = *cuentas;
            // Reduzco el tamaño del array dinamico en 1 cantidad
            *cuentas = (cuenta_t*) realloc(*cuentas, (*cantidad_cuentas + 1) * sizeof(cuenta_t));
            if(*cuentas == NULL)
            {
                free(aux);
                return ERROR_MEM;
            }
            flag = 1; 
        }
        i++;
    }
    if(flag == 0)
    {
        return ERROR_BUSQUEDA; 
    }
    return EXITO; 
}

int cuentas_deposito(cuenta_t* cuentas, int cantidad_cuentas, char* usuario, float monto)
{
    int i = 0, flag = 0;

    if(cuentas == NULL || cantidad_cuentas <= 0 || monto < 0 || usuario == NULL)
    {
        return ERROR;
    }

    while(flag == 0 && i < cantidad_cuentas)
    {
        // Verifica cada nombre de usuario de cada cuenta
        if(strcasecmp((cuentas + i)->usuario, usuario) == 0)
        {
            // Añado el monto
            (cuentas + i)->dinero += monto;
            // Actualizo el ultimo tiempo de actividad
            (cuentas + i)->tiempo = time(NULL);
            flag = 1;
        }
        i++;
    }
    if(flag == 0)
    {
        return ERROR_BUSQUEDA;
    }
    return EXITO;
}

int cuentas_extraccion(cuenta_t* cuentas, int cantidad_cuentas, char* usuario, float monto)
{
    int i = 0, flag = 0;

    if(cuentas == NULL || cantidad_cuentas <= 0 || monto < 0 || usuario == NULL)
    {
        return ERROR;
    }

    while(flag == 0 && i < cantidad_cuentas)
    {
        // Verifica cada nombre de usuario de cada cuenta
        if(strcasecmp((cuentas + i)->usuario, usuario) == 0)
        {
            // Comprueba si hay suficiente cantidad de dinero disponible en la cuenta a extraer. Caso contrario retorna ERROR
            if( ((cuentas + i)->dinero - monto) < 0 )
            {
                return ERROR;
            }
            // Extraigo el monto especificado de la cuenta
            (cuentas + i)->dinero -= monto;
            // Actualizo el ultimo tiempo de actividad
            (cuentas + i)->tiempo = time(NULL);
            flag = 1;
        }
        i++;
    }
    if(flag == 0)
    {
        return ERROR_BUSQUEDA;
    }
    return EXITO;
}

void cuenta_imprimir(cuenta_t* cuenta)
{
    struct tm time;
    time = *localtime(&cuenta->tiempo);

    if(cuenta != NULL)
    {
        printf("----------------------------------------------------------\n");
        printf("  Banco Gringotts\n");
        printf("  %s - @%s\n", cuenta->nombre, cuenta->usuario);
        printf("  DNI: %d\n\n", cuenta->dni);
        printf("  Saldo: $%.2f\n", cuenta->dinero);
        // Formato de la fecha: "HH:MM - DD/MM/YY"
        printf("  Ultima actividad: %d:%d:%d - %d/%d/%d\n", time.tm_hour, time.tm_min, time.tm_sec, time.tm_mday, time.tm_mon+1, time.tm_year+1900);
        printf("----------------------------------------------------------\n");
    }
}

void cuentas_imprimir(cuenta_t* cuentas, int cantidad_cuentas)
{
    int i;

    for(i = 0; i < cantidad_cuentas; i++)
    {
        cuenta_imprimir(cuentas + i);
        printf("\n");
    }
}

