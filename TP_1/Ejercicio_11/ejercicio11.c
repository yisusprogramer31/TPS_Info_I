/*!
 * @file    ejercicio11.c
 * @brief   Guia de Ejercicios - Introduccion y Estructuras de Decision
 *          Ejercicio [11]
 * @author  [JESUS MARIA MARESCA] <[jemaresca]@frba.utn.edu.ar>
 * @date    [3/5/2021]
 * @details Para compilar, linkear y ejecutar:
 *          [Compilar: gcc -c ejercicio11.c -Wall | Linkear: gcc ejercicio11.o -L. -linfo1 -o app11 -Wall | Ejecutar: ./app11]
 */
#include <stdio.h>
#include "info1.h"

int main(void)
{
   int a=0; //Primer numero ingresado
   int b=0; //Segundo numero ingresado
   int r=0; //Resto de la division

   a = obtener_int("Ingrese el valor del primer numero entero: ");
   b = obtener_int("Ingrese el valor del segundo numero entero: ");

   if(b!=0) // Evalua que b sea distinto de 0
   {
      r=a%b; // Se obtiene el resto de la division entre a y b
      
      if(r==0) // Evalua si el resto es igual a 0
      {
         printf("%d ES DIVISIBLE por %d. El resto es igual a %d\n",a,b,r); // El resto es igual a 0. Se muestra "Es divisible"
      }

      else
      {
         printf("%d NO ES DIVISIBLE por %d. El resto es igual a %d\n",a,b,r); // El resto es distinto de 0. Se muestra "No es divisible"
      }
   }

   else
   {
       printf("Esta dividiendo por 0.Ingrese los valores nuevamente. \n"); // b=0. El sistema rechaza los valores y pide al usuario que ingrese los valores nuevamente 
   }

   return 0;
}
    
