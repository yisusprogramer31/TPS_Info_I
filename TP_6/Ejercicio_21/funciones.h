/*!
 * @file   funciones.h
 * @brief  Generador aleatorio de oraciones
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   17/5/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/*!
 * @brief Genera una oracion aleatoria que estara concatenada por varias palabras. Estara estructurada y ordenada: 
 * 1)articulo, 2) sustantivo, 3)verbo, 4)preposicion, 5)articulo y 6) sustantivo
 * @param[in] oracion Oracion que estara formada por palabras aleatorias concatenadas entre si
 * @return Devuelve 1 si se pudo realizar la oracion
 * Devuelve 0 si no se pudo realizar por punteros NULL
 */
int gen_oracion(char*);

#endif  // FUNCIONES_H_
