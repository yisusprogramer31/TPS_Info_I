/*!
 * @file   funciones.c
 * @brief  Invertidor de palabra
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   14/6/2021
 */
#include <stdio.h>
#include <string.h>

int invertidor_de_palabras(char* palabra)
{   
    // La variable i recorre el array de derecha a izquierda
    // La variable j recorre el array de izquierda a derecha
    int i, j=0, k = 0, largo;
    // Use una variable auxilar mas que nada para guardarme el caracter y evitar que se sobreescriba
    char auxiliar;
    
    if(palabra == NULL)
    {
        return -2;
    }
    else
    {
        // Cambia el caracter \n generado por fgets por un \0 para evitar inconvenientes
        while(palabra[k] != '\0')
        {
            if(palabra[k] == '\n')
            {
                palabra[k] = '\0';
            }
            else
            {
                k++;
            }
        }
        largo = strlen(palabra);
        // Chequeo que el largo de la palabra no supere los 15 caracteres
        if(largo > 15)
        {
            return 0;
        }
        else
        {
            for(i = largo-1; i >= largo/2; i--)
            {
                auxiliar = palabra[j];
                palabra[j] = palabra[i];
                palabra[i]= auxiliar;
                j++;
            }
            return 1;
        }
    } 
}