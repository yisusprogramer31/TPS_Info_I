#include <stdio.h>
#define DIMENSION 3
double traza(const double* matriz, int largo);

int main(void)
{
    double matriz[DIMENSION][DIMENSION],sumdiagonal;
    int x=0,y=0; // Numero de fila y columna respectivamente

    // Inicializo array multidimensional en 0
    for(x=0;x<DIMENSION;x++)
        for(y=0;y<DIMENSION;y++)
            matriz[x][y]=0;
        
    // Tomo valores de cada cajita de la matriz
    for(x=0;x<DIMENSION;x++)
    {
        for(y=0;y<DIMENSION;y++)
        {
            printf("Termino %d | %d ",x+1,y+1);
            scanf("%lf",&matriz[x][y]);
            printf("\n");
        }
    }
    // Imprimo array
    for(x=0;x<DIMENSION;x++)
    {
        for(y=0;y<DIMENSION;y++)
        {
            printf(" %.2lf",matriz[x][y]);
        }
        printf("\n");
    }
    printf("\n");
    sumdiagonal = traza(&matriz[0][0],DIMENSION);
    printf("TRAZA: %.2lf\n",sumdiagonal);
    return 0;
}

double traza(const double* matriz, int largo)
{
    double traza=0;
    int i=0,x,y;

    for(x=0;x<DIMENSION;x++)
    {
        for(y=0;y<DIMENSION;y++)
        {
            printf(" %.2lf",*(matriz + x*largo + y));
        }
        printf("\n");
    }

    
    while(i<largo)
    {
        traza = traza + *(matriz + i*largo + i);
        i++;
    }
    return traza;
}
