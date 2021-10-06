/*!
 * @file   funciones.c
 * @brief  Funcion computo entre matrices
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   7/6/2021
 */
#include <stdio.h>

int computar_matriz_matriz(const double* matriz_a, const double* matriz_b, int filas, 
int columnas, char operacion, double* matriz_resultado)
{
    
    if(matriz_a == NULL || matriz_b == NULL || matriz_resultado == NULL)
    {
        return -2;
    }
    else
    {
        switch(operacion)
        {
            case '+':

                for(int i=0; i<filas; i++)
                {
                    for(int j=0; j<columnas; j++)
                    {
                        *(matriz_resultado + columnas*i +j) = *(matriz_a + columnas*i +j) + *(matriz_b + columnas*i +j);
                    }
                }
                return 0;
                break;

            case '-':

                for(int i=0; i<filas; i++)
                {
                    for(int j=0; j<columnas; j++)
                    {
                        *(matriz_resultado + columnas*i +j) = *(matriz_a + columnas*i +j) - *(matriz_b + columnas*i +j);
                    }
                }
                return 0;
                break;

            case '*':

                for(int i=0; i<filas; i++)
                {
                    for(int j=0; j<columnas; j++)
                    {
                        *(matriz_resultado + columnas*i +j) = *(matriz_a + columnas*i +j) * *(matriz_b + columnas*i +j);
                    }
                }
                return 0;
                break;
            
            case '/':

                for(int i=0; i<filas; i++)
                {
                    for(int j=0; j<columnas; j++)
                    {
                        if(*(matriz_b + columnas*i +j) == 0)
                        {   // En caso que se divida por cero corta el ciclo for y devuelve error
                            i = filas;
                            j = columnas;
                            return -1; 
                        }
                        else
                        {
                            *(matriz_resultado + columnas*i +j) = *(matriz_a + columnas*i +j) / *(matriz_b + columnas*i +j);
                            
                        }
                    }
                }
                return 0; 
                break;

            default:
                // Devuelve -3 si se ingresa caracter invalido
                return -3;
                break;
        }
    }
    return 0;  
}

/*
Aclaración: estas funciones las cree yo separadas del main.c para que el codigo en el main.c no fuera tan extenso
y solamente esten alli la llamada a la funcion computar matriz y muestre los resultados obtenidos.
*/

// Funcion imprime array tipo double
void array_print(const double* matriz, int filas, int columnas)
{
    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            printf(" %f",*(matriz+columnas*i+j));
        }
        printf("\n");
    }
}

// Funcion escanea array tipo double
void array_scan(double* matriz, int filas, int columnas)
{
    for(int i=0; i<filas; i++)
    {
        for(int j=0; j<columnas; j++)
        {
            printf("Fila %d - Columna %d: ",i+1,j+1);
            scanf("%lf",(matriz+columnas*i+j));
        }
    }
}

