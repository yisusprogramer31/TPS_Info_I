/*!
 * @file   funciones.h
 * @brief  Funcion promedio
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   27/5/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/*!
 * @brief Hace el promedio de dos numeros pasados por valor y devuelve un resultado pasado por referencia
 * @param[in] x Primer numero
 * @param[in] y Segundo numero
 * @param[in] resultado Es el promedio de los dos numeros. Es pasado por referencia usando un puntero
 */
void promedio(int x, int y, float* resultado);

#endif  // FUNCIONES_H_
