/*!
 * @file   funciones.c
 * @brief  Entero a string
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   22/6/2021
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int itostr(int numero, char** string)
{   
    int cifras = 1, i = 0;
    int numero_aux = numero;
    
    if(string == NULL)
    {
        return -1;
    }
    
    while(numero_aux >= 10)
    {
        numero_aux /= 10;
        cifras++;
    }

    *string = (char*) malloc( (cifras + 1) * sizeof(char) );

    if(*string == NULL)
    {
        return -1;
    }
    snprintf(*string, cifras+1, "%d",numero);

    return 0;
}