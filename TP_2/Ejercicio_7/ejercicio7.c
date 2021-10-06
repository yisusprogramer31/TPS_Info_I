/*!
 * @file    ejercicio7.c
 * @brief   Guia de Ejercicios 2 - Estructuras de Iteración
 *          Ejercicio [7]
 * @author  [JESUS MARIA MARESCA] <[jemaresca]@frba.utn.edu.ar>
 * @date    [8/5/2021]
 * @details Para compilar, linkear y ejecutar:
 *          [Compilar: gcc -c ejercicio7.c -Wall | Linkear: gcc ejercicio7.o -o app7 -Wall | Ejecutar: ./app7]
 */
#include <stdio.h>

int main(void)

{  // Tabla es el numero ingresado por el usuario
   int tabla; 
   int i=0;

   printf("Ingrese el valor entero:\n");
   scanf("%d",&tabla);
   
   // Verifica si el valor ingresado esta dentro del rango establecido
   if(tabla>=1 && tabla<=10)
   {
      printf("TABLA DEL %d\n",tabla);

      for(i=1;i<=10;i++)
      {
         // Imprime cada numero de la tabla ingresada
         printf("%d  ",tabla*i);
      }
      printf("\n");
   }
   else
   {
      printf("Ha ingresado un valor invalido. Intente nuevamente\n");
   }
   return 0;
}
    
