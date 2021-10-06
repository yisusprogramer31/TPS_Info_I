/*

Para compilar, linkear y ejecutar:
   - Compilar: gcc -c ejercicio27.c -Wall 
   - Linkear: gcc ejercicio27.o -L. -linfo1 -lm -o app27 -Wall
   - Ejecutar: ./app27

*/

#include <stdio.h>
#include "info1.h"
#include "math.h"

int main(void)
{
  //Me falta seguirlo pero me da paja
  
  int monto=0;
  
  int b1000,b500,b200,b100,b50,b20,b10=0;
  
  int r1000,r500,r200,r100,r50,r20,r10=0;

  monto=obtener_int("Ingrese el monto:\n");

  if(monto>0)
  {
     b1000 = monto/1000;
     printf("Billetes de 1000: %d\n",b1000);
     r1000 = monto%1000;

     if(r1000!=0)
     {
      b500 = r1000/500;
      printf("Billetes de 500: %d\n",b500);
      r500 = monto%500;
     }
     
     if(r500!=0)
     {
       b200 = r500/200;
       printf("Billetes de 200: %d\n",b200);
       r200 = monto%200;
     }
     



     



     
   


  }

  return 0;
}
  


   