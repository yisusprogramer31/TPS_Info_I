#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

Nodo retirarFinal(Nodo ** nodo, int * cantidad)
{
  Nodo retorno, *aux;
  
  if(*cantidad <= 0)
  {
    retorno.dato = ERROR;
  }
  else
  {
    // Almaceno el ultimo valor del array en retorno
    retorno = (*nodo)[*cantidad-1];
    // Achico el array en una cantidad 
    (*cantidad)--;
    aux = *nodo;
    *nodo = (Nodo*) realloc(*nodo, *cantidad * sizeof(Nodo));
    // Libero memoria en caso de fallo de realloc (no hay memoria)
    if(*nodo == NULL && *cantidad != 0)
    {
      free(aux);
      retorno.dato = ERROR;
    }
  }
  return retorno;
}

int agregarFinal(Nodo ** nodo, int * cantidad, Nodo copia)
{
  Nodo *aux = NULL;

  if(nodo == NULL || cantidad == NULL || *cantidad < 0)
  {
    return ERROR;
  }
  aux = *nodo;
  (*cantidad)++;
  *nodo = (Nodo*) realloc(*nodo, *cantidad * sizeof(Nodo));
  if(*nodo == NULL)
  {
    free(aux);
    return ERROR;
  }
  (*nodo)[*cantidad-1] = copia;

  return EXITO;
}

int agregarPrincipio(Nodo **nodo, int *cantidad, Nodo copia)
{
  Nodo *aux;
  int i;
  if(nodo == NULL || cantidad == NULL)
  {
    return ERROR;
  }
  (*cantidad)++;
  aux = *nodo;
  *nodo = (Nodo*) realloc(*nodo, *cantidad * sizeof(Nodo));
  if(*nodo == NULL)
  {
    free(aux);
    return ERROR;
  }
  for(i = *cantidad-1; i > 0; i--)
  {
    (*nodo)[i] = (*nodo)[i-1];
  }
  (*nodo)[0] = copia;
  
  return EXITO;
}

Nodo retirarPrincipio(Nodo **nodo, int* cantidad)
{
    Nodo retorno, *aux;
    int i;
    
    if(nodo == NULL || cantidad == NULL)
    {
        retorno.dato = ERROR;
    }
    else
    {
        retorno = (*nodo)[0];
        for(i = 0; i < *cantidad-1; i++)
        {
            (*nodo)[i] = (*nodo)[i+1];
        }
        (*cantidad)--;
        aux = *nodo;
        *nodo = (Nodo*) realloc(*nodo, *cantidad * sizeof(Nodo));
        if(*nodo == NULL && *cantidad != 0)
        {
            free(aux);
            retorno.dato = ERROR;
        }
    }
    return retorno;
}

void mostrar(Nodo* vector, int cantidad)
{
  int i;

  printf("Cantidad de elementos: %d\n", cantidad);

  for(i = 0; i < cantidad; i++)
  {
  	printf("%d ", vector[i].dato);    
  }
  printf("\n");
}