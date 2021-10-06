/*

Para compilar, linkear y ejecutar:
   - Compilar: gcc -c ejercicio17.c -Wall 
   - Linkear: gcc ejercicio17.o -L. -linfo1 -lm -o app17 -Wall
   - Ejecutar: ./app8

*/
 
#include <stdio.h>
#include "info1.h"
#include "math.h"

int main(void)
{
   float num1,num2,resultado;
   char operador;


   num1 = obtener_float("Ingrese el primer digito ");
   operador = obtener_char("Ingrese el operador ");
   num2 = obtener_float("Ingrese el segundo digito ");
   

   
   if(num2!=0)
   {
     switch(operador)
     {
      case '+': 
         resultado = num1+num2;
         break;

      case '-': 
         resultado = num1-num2;
         break;

      case '*': 
         resultado = num1*num2;
         break;

      case '/':
         resultado = num1/num2;
         break;

      default:
         printf("Ingreso un operador invalido\n");
     }
     
     printf("(%f) (%c) (%f) = (%f)\n",num1,operador,num2,resultado);

   }

   else
   {
      printf("Error. Division por 0\n");
   }


   return 0;

}
    