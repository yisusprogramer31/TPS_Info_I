/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 10 - Estructuras avanzadas
 *          Ejercicio 10.5
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    23/09/2021
 * @details Para compilar, linkear y ejecutar: Makefile
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void)
{
    cliente_t* cola = NULL, aux;
    int largo_cola = 0, estado = 0, estado2 = 0, nro_cliente = 0;
    char opcion = 0;

    while(opcion != SALIR)
    {
        /* // ESTO ES PARA VERIFICAR EL FUNCIONAMIENTO CORRECTO DEL ARRAY DINAMICO
        for(int i = 0; i < largo_cola; i++)
        {
            imprimir_cliente(cola + i);
        }
        */
        printf("\nMENU PRINCIPAL\n");
        printf("\t[c] Ingresar cliente a la cola de espera\n\t[a] Atender cliente\n\t[s] Salir del sistema\n");
        printf("\nIngrese una opcion para continuar: ");
        scanf("%c", &opcion);
        clear_newlines();

        switch(opcion)
        {
            case INGRESO:
                printf("\nIngreso de cliente a cola de espera...\n");
                ingreso_datos(&aux, largo_cola);
                estado = ingresar_cola(&cola, &largo_cola, &aux);
                if(estado != ERROR_MEM && estado != ERROR)
                {
                    // Imprime el cliente ingresado
                    imprimir_cliente(&aux);
                    printf("Se ha agregado con exito al cliente\n");
                }
                else
                {
                    printf("Se ha producido un error al ingresar un usuario al sistema\n");
                    opcion = SALIR;
                }
                break;

            case ATENDER:
                printf("\nIngrese el numero del cliente que desea atender\n");
                scanf("%d", &nro_cliente);
                clear_newlines();
                // Primero localiza el cliente
                estado = localizar_cliente(cola, largo_cola, nro_cliente);
                if(estado == ERROR_BUSQUEDA)
                {
                    printf("No se ha encontrado ningun cliente con el numero de atencion ingresado\n");
                }
                else if(estado == ERROR)
                {
                    printf("Se ha producido un error\n");
                }
                else
                {
                    // Entra aca si se encontro a un cliente
                    printf("Imprimiendo cliente con nro atencion = %d\n", nro_cliente);
                    imprimir_cliente(cola + estado);
                    printf("\t0. SI\n\t1. NO\n");
                    printf("¿Desea eliminar este cliente de la cola? Seleccione una opcion: ");
                    scanf("%d", &estado2);
                    clear_newlines();
                    
                    if(estado2 != 1)
                    {
                        estado = atender_cola(&cola, &largo_cola, estado);
                        if(estado != ERROR_MEM || estado != ERROR)
                        {
                            printf("Se ha eliminado con exito al cliente de la cola\n");
                        }
                        else
                        {
                            printf("Ha ocurrido un error");
                        }
                    }
                }
                break;
            
            case SALIR:
                printf("Saliendo del sistema\n");
                break;
            
            default:
                printf("Ha ingresado una opcion invalida. Intente nuevamente\n");
                break;      
        }
    }
    free(cola);

    return 0;
}
