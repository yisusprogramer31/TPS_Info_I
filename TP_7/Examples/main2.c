#include <stdio.h>
#include <stdlib.h>

void mostrarArreglo(int *ptr, int cant);

int main(void) 
{
  int aux;
  int *notas;
  int cant = 0;

  printf("Carga una nota finaliza con 0: ");
  scanf("%d", &aux);

  notas = (int*) malloc(1 * sizeof(int));
  cant++;
  if(notas!=NULL)
  {
    notas[0] = aux;
  

    while(aux != 0)
    {
      printf("Carga una nota finaliza con 0: ");
      scanf("%d", &aux);
      
      notas = (int*) realloc(notas, (cant+1) * sizeof(int));
      if(notas != NULL)
      {
        notas[cant] = aux;
        cant++;
      }

    }
    
    mostrarArreglo(notas, cant-1);

  }

  float promedio=0;
  int suma=0;
  int i;
  printf("Se cargaron %d notas\n", cant-1);
  for(i=0; i<cant-1; i++)
  {
    suma += *(notas+i);
  }
  promedio = (float)suma / i;
  printf("Promedio: %f\n",promedio);

  free(notas);
  return 0;
}


void mostrarArreglo(int *ptr, int cant)
{
  int i;
  for(i = 0 ; i < cant ; i++)
    {
      printf("Nota %d: %d\n", i+1, *(ptr+i));

    }

}