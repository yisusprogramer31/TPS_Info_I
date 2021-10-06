/*

TP 5 
EJERCICIO 5.9 PARA REPASAR!

*/

#include <stdio.h>
#define LARGO 20
#define ELEMENTO -3
int busqueda_lineal(const int*, int, int);

int main(void)
{
    int array[LARGO]={1,7,5,7,6,8,1,-3,-8,8,23,45,1,2};
    int item;
    item = busqueda_lineal(array, LARGO, ELEMENTO);
    printf("ITEM: %d\n",item);

    return 0;
}

int busqueda_lineal(const int* array, int largo, int elemento)
{
    int i=0,corte=0;
    if(array == NULL)
    {
        return -2;
    }
    else
    {
        while(i < largo && corte == 0)
        {
            if(array[i] == elemento)
            {
                corte=1;
                return i;
            }
            else
            {   
                i++;
            }
        }
        if(corte == 0)
        {
            return -1;
        }
    }
    return 0;
}
