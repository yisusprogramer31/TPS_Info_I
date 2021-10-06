/*

Para compilar, linkear y ejecutar:
   - Compilar: gcc -c ejercicio8.c -Wall 
   - Linkear: gcc ejercicio8.o -L. -linfo1 -lm -o app8 -Wall
   - Ejecutar: ./app8

*/
 
#include <stdio.h>
#include "info1.h"
#include "math.h"

int main(void)
{
   int x=0;
   int y=0;
   float n=0;

   x=obtener_int("Coordenada en x: ");
   y=obtener_int("Coordenada en y: ");

   n=sqrt(pow(x,2)+pow(y,2));

   printf("La norma del vector es: %f\n",n);

   return 0;

}
    