/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 8 - Argumentos del main
 *          Ejercicio 8.7
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    21/6/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{   
    char* separador;
    separador = strrchr(argv[1],':');
    *separador = '\0';
    printf("%c\n",*separador);
    puts(argv[1]);
    
    printf("Puerto: %s\n", separador+1);
    
    char p[20];
    int numero = 23;
 
    snprintf(p, 20, "", numero);
    puts(p);
    
    return 0;
}
