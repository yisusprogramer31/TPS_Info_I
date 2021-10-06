/*!
 * @file    ejercicio28.c
 * @brief   Guia de Ejercicios - Introduccion y Estructuras de Decision
 *          Ejercicio [28]
 * @author  [JESUS MARIA MARESCA] <[jemaresca]@frba.utn.edu.ar>
 * @date    [4/5/2021]
 * @details Para compilar, linkear y ejecutar:
 *          [Compilar: gcc -c ejercicio28.c -Wall | Linkear: gcc ejercicio28.o -L. -linfo1 -o app28 -Wall | Ejecutar: ./app28]
 */
#include <stdio.h>
#include "info1.h"

int main(void)
{
   char letra;

   letra = obtener_char("Ingrese una letra ");

   switch(letra)  // Dependiendo de la letra ingresada, devuelve un mensaje
   {
      case 'A' : printf("House Arryn\n"); // Si la letra es A devuelve House Arryn
      break;

      case 'B' : printf("House Baratheon\n"); // Si la letra es B devuelve House Baratheon
      break;

      case 'F' : printf("House Frey\n"); // Si la letra es F devuelve House Frey
      break;

      case 'G' : printf("House Greyjoy\n"); // Si la letra es G devuelve House Greyjoy
      break;

      case 'L' : printf("House Lannister\n"); // Si la letra es L devuelve House Lannister
      break;

      case 'M' : printf("House Martell\n"); // Si la letra es M devuelve House Martell
      break;

      case 'S' : printf("House Starkn"); // Si la letra es S devuelve House Starkn
      break;

      case 'T' : printf("House Targaryen\n"); // Si la letra es T devuelve House Targaryen
      break;

      default: printf("No lo conozco\n"); // Si la letra ingresada es diferente de todas las demas mencionadas arriba, devuelve No lo conozco
      break;

   }

   return 0;
}
    
