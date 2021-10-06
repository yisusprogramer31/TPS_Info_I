/*!
 * @file   funciones.h
 * @brief  Funciones juego DOOM
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   6/5/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/*!
 * @brief Calcula producto escalar entre dos vectores en R3
 * @param[in] vector_a Vector a (en R3)
 * @param[in] vector_b Vector b (en R3)
 * @return Retorna el producto escalar
 * Retorna -1 en caso de que alguno de los punteros sea NULL
 */
double producto_escalar_vec3(const double*, const double*);


/*!
 * @brief Calcula la norma de un vector en R3
 * @param[in] vector Vector (en R3)
 * @return Retorna la norma de un vector en R3
 * Retorna -1 en caso de que alguno de los punteros sea NULL
 */
double norma_vec3(const double*);


/*!
 * @brief Calcula el angulo en radianes entre dos vectores en R3
 * @param[in] vector_a Vector a (en R3)
 * @param[in] vector_b Vector b (en R3)
 * @return Retorna el angulo entre dos vectores en radianes
 * Retorna -1 en caso de que alguno de los punteros sea NULL
 */
double angulo_entre_vec3(const double*, const double*);


/*!
 * @brief Comprueba si el jugador esta apuntando al enemigo
 * @param[in] vector_mira Vector de la mira del jugador (en R3)
 * @param[in] vector_enemigo Vector del enemigo (en R3)
 * @param[in] angulo_limite Angulo establecido por el usuario. 
 * Dentro de este rango el jugador estaria apuntando al enemigo
 * @return Retorna 1 si el jugador esta apuntando al enemigo.
 * Retorna 0 en caso contrario
 * Retorna -1 en caso de que alguno de los punteros sea NULL
 */
int esta_apuntando_al_enemigo(const double*, const double*, double);

#endif  // FUNCIONES_H_
