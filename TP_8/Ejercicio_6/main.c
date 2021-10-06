/*!
 * @file    main.c
 * @brief   Guia de Ejercicios 8 - Argumentos del main
 *          Ejercicio 8.6
 * @author  Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date    27/6/2021
 * @details Para compilar, linkear y ejecutar: Ver compilar.sh
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{   
    int i;
    if(argc > 1)
    {
        if( strcmp(argv[1], "-r") != 0)
        {
            for(i = 1; i < argc; i++)
            {
                puts(argv][i);
            }
        }
        else
        {
            for(i = argc; i > 2; i--)
            {
                puts(argv[i-1]);
            }
        }
    }

    return 0;
}
