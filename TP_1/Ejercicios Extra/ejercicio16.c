/*

Para compilar, linkear y ejecutar:
   - Compilar: gcc -c ejercicio16.c -Wall 
   - Linkear: gcc ejercicio16.o -L. -linfo1 -lm -o app16 -Wall
   - Ejecutar: ./app16

*/

#include <stdio.h>
#include "info1.h"
#include "math.h"

int main(void)
{
   float lado1,lado2,lado3;

   lado1 = obtener_float("Ingrese el primer lado del triangulo: ");
   lado2 = obtener_float("Ingrese el segundo lado del triangulo: ");
   lado3 = obtener_float("Ingrese el tercer lado del triangulo: ");

   if(lado1>0 && lado2>0 && lado3>0) 
   {
      if(lado1==lado2 && lado1==lado3 && lado2==lado3)
      {
          printf("EQUILATERO\n");
      }
      
      else
      {
          if(lado1==lado2 || lado1==lado3 || lado2==lado3)
          {
             printf("ISOSCELES\n"); 
          }

          else
          {
             if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3)
             {
                 printf("ESCALENO\n");

             }
          }

      }
   }
   else
   {
       printf("NO ES UN TRIANGULO. SOS UN PELOTUDO\n");
   }
   
}
   