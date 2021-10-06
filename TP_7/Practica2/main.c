#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(void)
{   
    int cant = 2, i = 0, corte = 0, j=1;
    char* cadena = NULL;
    char* cadena_aux = NULL;
    int corte_aux = 0;
    
    cadena = (char*) malloc(cant * sizeof(char));
    cadena_aux = cadena;
    
    if(cadena == NULL)
    {
        printf("No memory\n");
    }

    while(!corte)
    {   
        printf("Ingrese caracter: ");
        scanf(" %c",&cadena[i]);
        
        if( isalpha(cadena[i]) == 0)
        {
            while(corte_aux != 1)
            {
                printf("Ingrese caracter nuevamente: ");
                scanf(" %c",&cadena[i]);
                if( isalpha(cadena[i]) != 0 )
                {
                    corte_aux=1;
                }
            }
        }

        if(cadena[i] == 'F')
        {
            if(j == 3)
            {
                cadena[i+1] = '\0';
                corte = !corte;
            }
            j++;
            i++;
            cant++;
            cadena = (char*) realloc(cadena, cant * sizeof(char));
            if(cadena == NULL)
            {
                corte = !corte;
                free(cadena_aux);
            }
        }
        else
        {
            j=1;
            i++;
            cant++;
            cadena = (char*) realloc(cadena, cant * sizeof(char));
            if(cadena == NULL)
            {
                corte = !corte;
                free(cadena_aux);
            }
        }
    }
    
    if(cadena != NULL)
    {
        puts(cadena);
        free(cadena);
    }
    else
    {
        printf("Memory error\n");
    }
    return 0;
   
}
