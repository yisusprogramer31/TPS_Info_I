// Funcion EJ 5

#include <stdio.h>

void clasificar_notas(const int* calificaciones, int cantidad, int * aprobados, int * desaprobados, int * ausentes)
{
    int i;

    if(calificaciones == NULL || aprobados == NULL || desaprobados == NULL || ausentes == NULL)
    {
        printf("Punteros NULL Cuidado!");
    }

    else
    {
        for(i=0;i<cantidad;i++)
        {
            if(calificaciones[i] >= 6 && calificaciones[i] <= 10)
            {
                (*aprobados)++;
            }
            if(calificaciones[i] > 0 && calificaciones[i] < 6)
            {
                (*desaprobados)++;
            }
            if(calificaciones[i] == 0)
            {
                (*ausentes)++;
            }
        }
    }
}

