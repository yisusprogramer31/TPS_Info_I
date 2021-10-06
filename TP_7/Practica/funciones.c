#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int strip(const char* string_in, char caracter, char** string_out)
{   
    int i = 0, size = 2;
    char* string_aux = NULL;

    if(string_in == NULL)
    {
        return 0;
    }

    *string_out = malloc( size * sizeof(char) );
    string_aux = *string_out;

    if(*string_out == NULL)
    {
        return 0;
    }

    while(string_in[i] != '\0')
    {
        if(string_in[i] == caracter)
        {
            *(*string_out + i) = '\0';
            return 1;
        }

        *string_out = realloc( *string_out, size * sizeof(char) );

        if(*string_out == NULL)
        {
            free(string_aux);
            return 0;
        }
        *(*string_out + i) = string_in[i];
        i++;
        size++;
    }
    return 1;
}