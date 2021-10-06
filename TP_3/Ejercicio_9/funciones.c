/*!
 * @file   funciones.c
 * @brief  Funcion descomponer numero decimal en base binaria, octal y hexadecimal
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   19/5/2021
 */
#include <stdio.h>

int descomponer_numero(int numero,int sistema)
{
    int resto;
    int number=numero;
    int i=0;

    if(numero > 0) // Solo admite enteros positivos sin el cero
    {
        switch(sistema)
        {
            case 0: //Binario
                while(number > 0)
                {
                    resto=number%2; // Obtengo resto de la division (digitos binarios)
                    number/=2; // Voy dividiendo por 2 al numero
                    printf("%d.2^%d",resto,i); // Voy imprimiendo esos digitos
                    i++;
                    if(number > 0)
                    {
                        printf(" + ");
                    }
                }
                printf(" = %d",numero);
                return i;
                break;

            case 1: // Octal
                while(number > 0)
                {
                    resto=number%8;
                    number/=8;
                    printf("%o.8^%d",resto,i);
                    i++;
                    if(number > 0)
                    {
                        printf(" + ");
                    }
                }
                printf(" = %d",numero);
                return i;
                break;

            case 2: // Hexadecimal
                while(number > 0)
                {
                    resto=number%16;
                    number/=16;
                    printf("%X.16^%d",resto,i);
                    i++;
                    if(number > 0)
                    {
                        printf(" + ");
                    }
                }
                printf(" = %d",numero);
                return i;
                break;

            default:
                return -1; // Devuelve -1 si el usuario ingreso un sistema de numeracion invalido
                break;     
        }
    }
    else
    {
        return -2; // Devuelve -2 si el numero es menor o igual a cero
    }
    return 0;  
}
