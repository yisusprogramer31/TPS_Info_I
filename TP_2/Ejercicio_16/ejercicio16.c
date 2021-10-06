/*!
 * @file    ejercicio16.c
 * @brief   Guia de Ejercicios 2 - Estructuras de Iteración
 *          Ejercicio [16]
 * @author  [JESUS MARIA MARESCA] <[jemaresca]@frba.utn.edu.ar>
 * @date    [14/5/2021]
 * @details Para compilar, linkear y ejecutar:
 *          [Compilar: gcc -c ejercicio16.c -Wall | Linkear: gcc ejercicio16.o -o app16 -Wall | Ejecutar: ./app16]
 */
#include <stdio.h>

unsigned long hacer_factorial(int numero); // Declaracion de la funcion factorial

int main(void) // Funcion principal - Aproximacion numero e
{
  int i=0;
  float e,suma=0;

  do
  {
    suma = 1/(float)hacer_factorial(i); // Calculo cada termino (1/n!)
    e+=suma; // Sumas parciales 
    i++;

  } while(i<12);
  

  /* El bucle do while se ejecutará hasta que la diferencia entre dos aproximaciones sucesivas sea menor a 1e-9. 
  El ciclo for se ejecutara 12 veces ya que 1/12!-1/13! es menor a 1e-9.
  */
 
  printf("Aproximacion numero e: %.12f \n",e);  // Se muestra el numero e aproximado

  return 0;
}

// La función factorial esta separada de la función main para que el codigo sea mas ordenado

unsigned long hacer_factorial(int numero) // Funcion factorial (devuelve siempre valores > 0 y muy grandes)
{
   int i;
   unsigned long resultado=1; 

    for(i=1;i<=numero;i++)
    {
      resultado*=i; // Multiplica el resultado anterior por un numero que se va sumando 1 a si mismo
    }
   return resultado;
  
}