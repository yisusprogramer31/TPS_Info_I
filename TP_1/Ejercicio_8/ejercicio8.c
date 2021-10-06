/*!
 * @file    ejercicio8.c
 * @brief   Guia de Ejercicios - Introduccion y Estructuras de Decision
 *          Ejercicio [8]
 * @author  [JESUS MARIA MARESCA] <[jemaresca]@frba.utn.edu.ar>
 * @date    [5/5/2021]
 * @details Para compilar, linkear y ejecutar:
 *          [Compilar: gcc -c ejercicio8.c -Wall | Linkear: gcc ejercicio8.o -L. -linfo1 -lm -o app8 -Wall | Ejecutar: ./app8]
 */
#include <stdio.h>
#include "info1.h"
#include "math.h"

int main(void)
{
   //Defino los extremos de cada subintervalo

   float x=0; //Extremo inferior del intervalo
   float x1=0; //Extremo inferior + distancia de subintervalo
   float x2=0; //X1 + distancia de subintervalo
   float x3=0; //X2 + distancia de subintervalo
   float y=0; //Extremo superior del intervalo
   float d=0; //Distancia de cada subintervalo

   x = obtener_float("Ingrese el extremo inferior del intervalo: ");
   y = obtener_float("Ingrese el extremo superior del intervalo: ");


   d = (fabs(y-x))/4; //Obtengo la distancia de cada subintervalo

   if(d!=0 && x<y) //Evalua si la distancia del intervalo es distinto de 0 y que la cota superior del intervalo es mayor que la cota inferior
   {
     //Calcula cada extremo de cada subintervalo

     x1=x+d;
     x2=x1+d;
     x3=x2+d;

     printf("El intervalo ingresado es: (%f;%f)\n",x,y); //Imprimo el intervalo ingresado
     
     //Imprimo los 4 subintervalos
     
     printf("1° subintervalo: (%f;%f)\n",x,x1); 
     printf("2° subintervalo: (%f;%f)\n",x1,x2);
     printf("3° subintervalo: (%f;%f)\n",x2,x3);
     printf("4° subintervalo: (%f;%f)\n",x3,y);
   
   }

   else
   {
      printf("El intervalo ingresado es incorrecto. Intente nuevamente\n"); 

      /*
      Las cotas del intervalo son iguales --> Es un punto
      La cota superior es menor que la inferior --> El intervalo esta puesto al reves. 
      Por eso devuelve error.
      */  
   }

   return 0;
}
    
