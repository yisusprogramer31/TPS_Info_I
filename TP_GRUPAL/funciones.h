#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#define ERROR -1
#define EXITO 0
#define CANT 5

typedef struct nodo
{
 	int dato;
} Nodo;

Nodo retirarFinal(Nodo **nodo, int* cantidad);
int agregarFinal(Nodo **nodo, int * cantidad, Nodo copia);
int agregarPrincipio(Nodo **nodo, int *cantidad, Nodo copia);
Nodo retirarPrincipio(Nodo **nodo, int* cantidad);
void mostrar(Nodo*, int);

#endif
