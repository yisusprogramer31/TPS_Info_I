/*
	Integrantes del grupo:
	- Paulo Rodriguez Miota
	- Nicolas Nahuel Matteucci
	- Jesus Maria Maresca
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

#define AGREGAR_INICIO 1970
#define AGREGAR_FINAL 1680

int main (void)
{
  int i = 0, cantidad = 0 , estado = 0;
  Nodo * listado = NULL, retirado, copia;

  cantidad = CANT;
  listado = (Nodo*) malloc(cantidad * sizeof(Nodo));
  if(listado == NULL)
  {
    return ERROR;
  }

  for(i=0; i<cantidad; i++)
  {
    listado[i].dato = i+31;
  }
  
  printf("FUNCION AGREGAR FINAL:\nAntes\n");
  mostrar(listado, cantidad);
  copia.dato = AGREGAR_FINAL;
  printf("Agregamos el valor: %d\n", copia.dato);
  estado = agregarFinal(&listado, &cantidad, copia);
  if(estado != ERROR)
  {
    printf("Despues\n");
    mostrar(listado, cantidad);
  }
  else
  {
    printf("Ha ocurrido un error\n");
  }
  printf("-----------------------------\n");

  printf("FUNCION AGREGAR PRINCIPIO:Antes\n");
  mostrar(listado, cantidad);
  copia.dato = AGREGAR_INICIO;
  printf("Agregamos el valor: %d\n", copia.dato);
  estado = agregarPrincipio(&listado, &cantidad, copia);
  if(estado != ERROR)
  {
    printf("Despues\n");
    mostrar(listado, cantidad);
  }
  else
  {
    printf("Ha ocurrido un error\n");
  }
  printf("-----------------------------\n");
  
  printf("FUNCION RETIRAR PRINCIPIO\n");
  printf("Antes de retirar del principio\n");
  mostrar(listado, cantidad);
  retirado = retirarPrincipio(&listado, &cantidad);
  if(retirado.dato != ERROR)
  {
    printf("\nEl valor retirado del principio es: %d\n", retirado.dato);
    printf("Despues de retirar del principio\n");
    mostrar(listado, cantidad);
  }
  else
  {
    printf("Ha ocurrido un error\n");
  }
  
  printf("-----------------------------\n");
  
  printf("FUNCION RETIRAR FINAL\n");
  printf("Antes de retirar del FINAL\n");
  mostrar(listado, cantidad);
  retirado = retirarFinal(&listado, &cantidad);
  if(retirado.dato != ERROR)
  {
    printf("\nEl valor retirado del final es: %d\n", retirado.dato);
    printf("Despues de retirar del final\n");
    mostrar(listado, cantidad);
  }
  else
  {
    printf("Ha ocurrido un error\n");
  }
  free(listado); 
  
  return 0;
}

