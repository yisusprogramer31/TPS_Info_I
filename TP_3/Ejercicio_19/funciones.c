/*!
 * @file   funciones.c
 * @brief  Funcion comparacion escalas temperatura
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   22/5/2021
 */
#include <stdio.h>
#include <math.h>
#define CELSIUS -50 // Temperatura (inicial) en Celsius 
#define LIMITE 0.001

int comparacion_temperatura()
{
    float celsius=CELSIUS;
    float faren;
    int valor=0;
    int tempf;
    do
    {
        faren=celsius*1.8+32; // Pasaje de celsius a fahrenheit
        // Como no puedo igualar floats, hago su diferencia y obtengo su valor absoluto con fabs. 
        // De esa manera si lo puedo comparar
        if(fabs(faren-celsius) < LIMITE) 
        {
            tempf=celsius;
            valor=1; // Asigna a valor 1. Quiere decir que hubo un valor que coincidio
        }
        celsius++;
  
    } while(celsius<50); // Voy barriendo desde -50 a 50.

    if(valor == 0) 
    {
        return -1; // No hubo un valor coincidente. Devuelve -1
    }
    else
    {
        return tempf; // // Hubo un valor. Devuelve el valor tempf
    }
    return 0;  
}

