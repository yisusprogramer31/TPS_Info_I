/*!
 * @file    ejercicio24.c
 * @brief   Guia de Ejercicios 2 - Estructuras de Iteración
 *          Ejercicio [24]
 * @author  [JESUS MARIA MARESCA] <[jemaresca]@frba.utn.edu.ar>
 * @date    [19/5/2021]
 * @details Para compilar, linkear y ejecutar:
 *          [Compilar: gcc -c ejercicio24.c -Wall | Linkear: gcc ejercicio24.o -o app24 -Wall | Ejecutar: ./app24]
 */
#include <stdio.h>
#include "info1.h"

int main(void)
{
   /*
   El codigo esta divido en dos partes fundamentales.
   Una que verifica si el numero ingresado esta entre 1 y 8 inclusive.
   La otra parte realiza la piramede y la altura de esta está en funcion de la altura ingresada por el usuario.
   */
   
   int altura,i,w=0;
   char estado=0;
   int j=1;

   printf("Ingrese la altura de la piramede: ");
   scanf("%d",&altura);


   // El bucle while se terminara de ejecutar hasta que la altura este dentro del intervalo [1,8]
   while(estado==0) 
   {
     if(altura>=1 && altura<=8)
     {
        estado=1; // Modifica la variable de la condicion del while para que este termine de ejectutarse. (Se cumple la condición)
     }
     else
     {
        printf("Ingrese la altura de la piramede: \n");
        scanf("%d",&altura);
        // No se modifica la variable de la condición del while. Este se ejecutara otra vez (No se cumple la condición)
     }
   }

   printf("\n");

   for(i=1;i<=altura;i++) // Ciclo for que crea las columnas
   { 
      for(w=0;w<j;w++) // Ciclo for que crea las filas
      {
        printf("#"); // Imprime ladrillito
      }
      printf("\n"); // Crea espacio para replicar las distintas filas
      j++;
   }
   printf("\n");
   
   return 0;
}
    
