/*!
 * @file   funciones.c
 * @brief  Codificacion a Cesar
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   15/6/2021
 */
#include <stdio.h>
#include <string.h>

int a_cesar(char* frase)
{   
    int i = 0, corte = 0;

    if(frase == NULL)
    {
        return -2;
    }
    else
    {
        // Cambia el caracter \n generado por fgets por un \0 para evitar inconvenientes
        if( frase[strlen(frase) - 1] == '\n' ) 
        {
            frase[strlen(frase) - 1] = '\0';
        }
        // Recorro el array de caracteres hasta el final. Corta cuando llega al '\0' o cuando se encuentra con un caracter no valido
        while( (frase[i] != '\0') && (corte == 0) )
        {
            if( (frase[i] >= 'A' && frase[i] <= 'M') )
            {
                frase[i] += 13;
                i++;
            }
            else if( (frase[i] >= 'N' && frase[i] <= 'Z') )
            {
                frase[i] -= 13;
                i++;
            }
            else if( frase[i] == ' ' )
            {
                i++;
            }
            else
            {
                // Si se encuentra con un caracter que no sea una letra mayuscula o un espacio, directamente corta el while y devuelve error
                corte = 1;
                return 0;
            }
        } 
        return 1;  
    }    
}