/*

Para compilar, linkear y ejecutar:
   - Compilar: gcc -c ejercicio19.c -Wall 
   - Linkear: gcc ejercicio19.o -L. -linfo1 -lm -o app19 -Wall
   - Ejecutar: ./app19

*/
 
#include <stdio.h>
#include "info1.h"
#include "math.h"

int main(void)
{
   float a,b,c,discriminante,r1,r2=0;

   a = obtener_float("Ingrese el coeficiente a: ");
   b = obtener_float("Ingrese el coeficiente b: ");
   c = obtener_float("Ingrese el coeficiente c: ");

   if(a!=0)
   {
      discriminante = pow(b,2)-4*a*c;

      if(discriminante>0)
      {
      r1 = (-b+sqrt(discriminante)) / (2*a);
      r2 = (-b-sqrt(discriminante)) / (2*a);
      printf("COEFICIENTES: a=%f | b=%f | c=%f\n",a,b,c);
      printf("RAICES: r1=%f | r2=%f\n",r1,r2);
      printf("DOS RAICES REALES UNICAS\n");
      }
   
      if(discriminante==0)
      {
      r1 = -b / (2*a);
      r2 = r1;
      printf("COEFICIENTES: a=%f | b=%f | c=%f\n",a,b,c);
      printf("RAICES: r1=%f | r2=%f\n",r1,r2);
      printf("UNICA RAIZ REAL\n");
      }

      if(discriminante<0)
      {
      printf("COEFICIENTES: a=%f | b=%f | c=%f\n",a,b,c);
      printf("NO TIENE RAICES REALES\n");
      }

   }

   else
   {
      printf("No es una funcion cuadratica: a=0\n");
   }

   
   
   return 0;

}
    