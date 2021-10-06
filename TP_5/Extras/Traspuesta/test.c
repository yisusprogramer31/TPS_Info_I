#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void traspuesta_xd(const int* matriz, int filas, int columnas, int* traspuesta);

int main()
{
    int matriz[3][2] = { {1,2},{4,5},{9,7} };
    int traspuesta[2][3];

    traspuesta_xd(&matriz[0][0], 3,2, &traspuesta[0][0]);
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf(" %d",traspuesta[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}

void traspuesta_xd(const int* matriz, int filas, int columnas, int* traspuesta)
{
    int i,j;
    for(i=0; i<filas; i++)
    {
        for(j=0; j<columnas; j++)
        {
            *(traspuesta + filas * j + i) = *(matriz + columnas*i +j);
        }
    }
}