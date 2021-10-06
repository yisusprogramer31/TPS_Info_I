/*
TP 5 
EJERCICIO 5.25 PARA REPASAR!
*/

// PRODUCTO MATRICIAL

#include <stdio.h>
#define FILAS_A 3
#define COLUMNAS_A 3
#define FILAS_B 3
#define COLUMNAS_B 1


int main(void)
{
   double matriz_a[FILAS_A][COLUMNAS_A] = { {1,0,1} , {1,1,-1} , {1,0,-1} };

   double matriz_b[FILAS_B][COLUMNAS_B] = { {2} , {1} , {3} };

   double matriz_resultado[FILAS_A][COLUMNAS_B];

   int i,j,k;


   if(COLUMNAS_A != FILAS_B)
   {
      printf("NO\n");
   }
   else
   {
      for (i = 0; i < COLUMNAS_B; i++) 
      {
         for (j = 0; j < FILAS_A; j++) 
         {
            double suma=0;
            for (k = 0; k < COLUMNAS_A; k++) 
            {
                suma = suma + matriz_a[j][k] * matriz_b[k][i];
            }
            matriz_resultado[j][i] = suma;
         }
      }
      printf("Imprimiendo producto\n");
      for (i = 0; i < FILAS_A; i++) 
      {
         for (j = 0; j < COLUMNAS_B; j++) 
         {
            printf("%f ", matriz_resultado[i][j]);
         }
         printf("\n");
      }
   }
   return 0;
}




