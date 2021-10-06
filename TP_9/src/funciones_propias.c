/*!
 * @file   funciones_propias.c
 * @brief  Modulo adicional de funciones para operaciones bancarias
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   1/09/2021
 */
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "funciones.h"
#include "funciones_propias.h"

void clear_newlines(void)
{
    int c;
    do
    {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

void get_string(char* ptr, int size)
{
    char* match = NULL;

    fgets(ptr, size, stdin);
    match = strrchr(ptr, '\n');
    if(match != NULL)
    {
        *match = '\0';
    }
}

void ingreso_datos(cuenta_t* cuenta)
{
    // Ingreso del nombre completo
    printf("Ingrese su nombre completo: ");
    get_string(cuenta->nombre, LARGO_STRING);
    
    // Ingreso del nombre de usuario
    printf("Ingrese su nombre de usuario: ");
    get_string(cuenta->usuario, LARGO_STRING);

    // Ingreso de la contraseña
    printf("Ingrese su contraseña: ");
    get_string(cuenta->contrasena, LARGO_STRING);

    // Ingreso del DNI
    printf("Ingrese su DNI: ");
    scanf("%d", &cuenta->dni);

    clear_newlines();
}

void reordenar_cuentas(cuenta_t* cuentas, int cantidad_cuentas, int nro_usuario)
{
    int i;

    if(cuentas != NULL && cantidad_cuentas > 0 && nro_usuario >= 0 && nro_usuario < cantidad_cuentas)
    {
        for(i = nro_usuario; i < cantidad_cuentas-1; i++)
        {
            *(cuentas + i) = *(cuentas + (i+1));
        }
    }
}

