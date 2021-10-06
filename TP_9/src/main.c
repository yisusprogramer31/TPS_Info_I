/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 9 - Estructuras
 *          Ejercicio 9.5
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    1/09/2021
 * @details Para compilar, linkear y ejecutar: Ver Makefile
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones_propias.h"

#define USUARIO_ELIMINAR "yisus" // Cambie el usuario a eliminar
#define USUARIO_OPERACION "pepe" // Cambie el usuario a realizar un deposito o extraccion

#define NRO_CUENTA 1 // Cambie el usuario a imprimir su cuenta

#define MONTO_DEPOSITO 1500
#define MONTO_EXTRACCION 100

int main(void)
{
    int cantidad_cuentas = 0, opcion = 0 , dinero = 0, nro_cuenta = 0;
    cuenta_t *cuentas = NULL, cuenta_aux;
    char cuenta[LARGO_STRING];

    printf("OPERADOR DE CUENTAS BANCARIAS: Banco Gringotts\n");
    
    while(opcion != SALIR)
    {
        printf("\n 1. Agregar cuenta\n 2. Eliminar cuenta\n 3. Imprimir cuenta especifica\n");
        printf(" 4. Imprimir todas las cuentas\n 5. Depositar dinero\n 6. Extraer dinero\n 7. Salir\n");
        scanf("%d", &opcion);
        clear_newlines();

        switch(opcion)
        {
            case AGREGAR:
                // Ingreso de cuenta por usuario
                printf("---INGRESO DE DATOS---\n");
                ingreso_datos(&cuenta_aux);
                // Se carga al sistema
                cuentas_agregar(&cuentas, &cantidad_cuentas, &cuenta_aux);
                break;

            case ELIMINAR:
                // Para eliminar a cierto usuario en particular del sistema
                printf("Ingrese la cuenta a eliminar: ");
                get_string(cuenta, LARGO_STRING);
                printf("Eliminando cuenta: %s\n", cuenta);
                cuentas_eliminar(&cuentas, &cantidad_cuentas, cuenta);
                break;
            
            case IMPRIMIR_CUENTA:
                // Imprime una cuenta en particular
                printf("Ingrese el numero de cuenta a imprimir: ");
                scanf("%d", &nro_cuenta);
                clear_newlines();
                printf("Imprimo cuenta N°%d\n", nro_cuenta);    
                cuenta_imprimir(cuentas + (nro_cuenta-1));
                break;

            case IMPRIMIR_TODO:
                // Imprime todas las cuentas existentes
                cuentas_imprimir(cuentas, cantidad_cuentas);
                break;

            case DEPOSITAR:
                // Desposita dinero a alguna cuenta
                printf("Ingrese cuenta a depositar y monto: ");
                get_string(cuenta, LARGO_STRING);
                scanf("%d", &dinero);
                clear_newlines();
                printf("Depositando $%d en cuenta: %s\n", dinero, cuenta);
                cuentas_deposito(cuentas, cantidad_cuentas, cuenta, dinero);
                break;
            
            case EXTRAER:
                // Extrae dinero a alguna cuenta
                printf("Ingrese cuenta a extraer y monto: ");
                get_string(cuenta, LARGO_STRING);
                scanf("%d", &dinero);
                clear_newlines();
                printf("Extrayendo $%d en cuenta: %s\n", dinero, cuenta);
                cuentas_extraccion(cuentas, cantidad_cuentas, cuenta, dinero);
                break;
            
            case SALIR:
                printf("Saliendo del sistema\n");
                break;
            
            default:
                printf("Ha ingresado una opcion invalida\n");
                break;
        }
    }
    free(cuentas);

    return 0;
}
