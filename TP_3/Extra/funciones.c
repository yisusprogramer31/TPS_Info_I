/*!
 * @file   funciones.c
 * @brief  Funcion aprender a multiplicar. 
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   23/5/2021
 */
#include <stdio.h>

float calculadora(float nro1, float nro2, char operacion)
{
    switch(operacion)
    {
        case '+':
            return nro1+nro2;
            break;

        case '-':
            return nro1-nro2;
            break;

        case '*':
            return nro1*nro2;
            break;

        case '/':
            if(nro2==0)
            {
                printf("Division por cero\n");
            }
            else
            {
                return nro1/nro2;
            }
            break;

        default:
            printf("Operacion invalida\n"); 
            break;     
    }
    return 0;
}
