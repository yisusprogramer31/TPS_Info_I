/*!
 * @file   funciones.c
 * @brief  Funciones juego DOOM
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   6/6/2021
 */
#include <stdio.h>
#include <math.h>

double producto_escalar_vec3(const double* vector_a, const double* vector_b)
{
    int i;
    double prod_escalar=0;

    if(vector_a == NULL || vector_b == NULL)
    {
        return -1;
    }
    else
    {
        for(i=0; i<3; i++)
        {
            prod_escalar = prod_escalar + (vector_a[i] * vector_b[i]);
        }
        return prod_escalar;
    }
}


double norma_vec3(const double* vector)
{
    double norma=0;

    if(vector == NULL)
    {
        return -1;
    }
    else
    {
        norma = sqrt( pow(vector[0],2) + pow(vector[1],2) + pow(vector[2],2) );
        return norma;       
    }
}


double angulo_entre_vec3(const double* vector_a, const double* vector_b)
{
    double cociente=0,angulo=0;

    if(vector_a == NULL || vector_b == NULL)
    {
        return -1;
    }
    else
    {   
        // Primero calculo el cociente entre el producto escalar y el producto de las normas de los dos vectores
        cociente = ( producto_escalar_vec3(vector_a, vector_b) ) / ( norma_vec3(vector_a) * norma_vec3(vector_b) );
        
        // Calculo el angulo entre los dos vectores con funcion arccos del cociente
        angulo = acos(cociente); 
        return angulo;
    }
}


int esta_apuntando_al_enemigo(const double* vector_mira , const double* vector_enemigo, double angulo_limite)
{
    double angulo_entre_personajes=0;

    if(vector_mira == NULL || vector_enemigo == NULL)
    {
        return -1;
    }
    else
    {
        angulo_entre_personajes = angulo_entre_vec3(vector_mira, vector_enemigo);
        
        // Comprueba si el angulo entre los dos vectores es menor al angulo limite
        if(angulo_entre_personajes < angulo_limite) 
        {   
            // Retorna 1 si el jugador esta apuntando al enemigo
            return 1; 
        }
        else
        {   
            // Retorna 0 si el jugador NO esta apuntando al enemigo
            return 0; 
        }
    }   
}
