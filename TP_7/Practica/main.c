#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{   
    //char *enter = NULL;
    char *copia = NULL;
    char string[] = "HOLA CHICOS COMO ANDAN?";
    char caracter;
    //int result;

    //printf("Ingrese un string de maximo 20 caracteres: ");
    //fgets(string, 20, stdin);
    //enter = strrchr(string, '\n');
    //*(enter) = '\0';
    printf("Ingrese un caracter de corte: ");
    caracter = getchar();
    printf("\nString ingresado: %s",string);

    strip(string, caracter, &copia);

    printf("\nString cortado por caracter (%c): %s\n",caracter, copia);

    free(copia);

    return 0;
}
