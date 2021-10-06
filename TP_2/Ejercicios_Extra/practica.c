/*

Para compilar, linkear y ejecutar:
   - Compilar: gcc -c ejercicio8.c -Wall 
   - Linkear: gcc ejercicio8.o -L. -linfo1 -lm -o app8 -Wall
   - Ejecutar: ./app8

*/
 
#include <stdio.h>
void ext();

int main(void)
{
   int cant;
   scanf("%d",&cant);
   ext(cant);
   return 0;

}

void ext(int largo)
{
   int i=0;
   for(i=0;i<largo;i++)
   {
      printf("Hola Mundo\n");
   }
}
  
    