/*!
 * @file   funciones.c
 * @brief  Generador aleatorio de oraciones
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   17/6/2021
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gen_oracion(char* oracion)
{
    char articulo[5][7] = { "el", "un", "uno", "algun", "ningun" };
    char sustantivo[5][7] = { "niño", "perro", "gato", "pueblo", "auto" };
    char verbo[5][8] = { "manejo", "salto", "corrio", "camino", "esquivo" };
    char preposicion[5][7] = { "hacia", "desde", "sobre" , "debajo", "entre" };
    // Genero numeros aleatorios. Genere varios para evitar que se repita la oracion
    int n1 = rand() % 5, n2 = rand() % 5, n3 = rand() % 5, n4 = rand() % 5; 

    if(oracion == NULL)
    {
        return 0;
    }
    else
    {   
        // Concateno las palabras para formar una oracion
        snprintf(oracion, 60, "%s %s %s %s %s %s", articulo[n1], sustantivo[n2], verbo[n3], preposicion[n4], articulo[n3], sustantivo[n4]);
        return 1;    
    }   
}

