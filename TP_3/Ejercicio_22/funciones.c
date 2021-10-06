/*!
 * @file   funciones.c
 * @brief  Funcion aprender a multiplicar. 
 * @author Jesus Maria Maresca <jemareca@frba.utn.edu.ar>
 * @date   23/5/2021
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aprender_multiplicar()
{
    srand(time(NULL)); // Esta funcion hace que el numero random cambie cuando se ejecuta 
    
    char tecla=0;
    printf("Bienvenido a aprender a multiplicar con C. Apreta enter para continuar");
    scanf("%c",&tecla);

    int i=0;
    int rta,val;
    int dig1,dig2=rand() % 9; // Valores random de los numeros a multiplicar 
    int frase=rand() % 3; // Valor random para generar respuestas aleatorias 

    while(i < 10)
    {
        rta=dig1*dig2;
        printf("¿Cuanto es %d x %d?\n",dig1,dig2);
        scanf("%d",&val);
        if(val == rta)
        {
            switch(frase) // Generador de frases aleatorio (para respuestas correctas)
            {
                case 0: 
                    printf("Muy bien!\n");
                    break;
                case 1:
                    printf("Excelente!\n");
                    break;
                case 2:
                    printf("Felicitaciones por tu empeño.\n");
                    break;
                case 3:
                    printf("Buen trabajo!\n");
                    break;
                default:
                    break;
            }
            i++;
            dig1=rand() % 9; // Cambia los valores random si la respuesta es correcta
            dig2=rand() % 9;
            frase=rand() % 3;
        }
        else
        {
            switch(frase) // Generador de frases aleatorio (para respuestas incorrectas)
            {
                case 0: 
                    printf("No,volve a intentarlo por favor.\n");
                    break;
                case 1:
                    printf("Incorrecto. Prueba una ves más.\n");
                    break;
                case 2:
                    printf("No te rindas!\n");
                    break;
                case 3:
                    printf("No, seguí intentando!\n");
                    break;
                default:
                    break;
            }
            frase=rand() % 3;
        }

    }
    printf("FELICITACIONES. HAS RESPONDIDO TODAS LAS PREGUNTAS. GRACIAS POR USAR NUESTRO PROGRAMA!\n");   
}
