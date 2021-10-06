/*!
 * @file   funciones.c
 * @brief  Obtener string
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   21/6/2021
 */
#include <stdio.h>
#include <stdlib.h>

char* obtener_string(void)
{
    int se_apreto_enter = 0, i = 0, cant = 2;
    // Array dinamico
    char* cadena = NULL;
    // Array dinamico auxiliar por si se sobreescribe con NULL para despues liberar
    char* cadena_aux = NULL;
    // Reservo memoria: 2 bytes para caracter y caracter nulo ('\0')
    cadena = (char*) malloc(cant * sizeof(char));
    cadena_aux = cadena;

    if(cadena == NULL)
    {
        return NULL;
    }
    
    while( ! se_apreto_enter )
    {
        cadena[i] = getchar();
        // Si se ingresa un enter, quiere decir que la frase ingresada termino, por lo tanto escribimos un '\0' por el '\n'
        if(cadena[i] == '\n')
        {
            cadena[i] = '\0';
            se_apreto_enter = !se_apreto_enter;
        }
        else
        {   // Redimensionamos el array dinamico dependiendo de la longitud de caracteres que el usuario requiera
            cadena = (char*) realloc(cadena, cant * sizeof(char));

            if(cadena == NULL)
            {   // Si no hay mas espacio para reservar, cortamos el programa aca, y liberamos la memoria reservada que teniamos antes.
                // Esto lo podemos hacer gracias al puntero auxiliar, sino perderiamos la referencia del array dinamico y no podriamos liberar la memoria
                free(cadena_aux);
                se_apreto_enter = !se_apreto_enter;
                return NULL;
            }
            i++;
            cant++;
        } 
    }
    return cadena;    
}

