/*!
 * @file   funciones.h
 * @brief  Funcion descomponer segundos
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   27/5/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/*!
 * @brief Descompone el tiempo en segundos en horas, minutos y segundos
 * @param[in] total_segundos Es la cantidad de segundos a descomponer
 * @param[in] horas Cantidad de horas
 * @param[in] minutos Cantidad de minutos
 * @param[in] segundos Cantidad de segundos
 */
void a_sexagesimal(int total_segundos, int* horas, int* minutos, int* segundos);

#endif  // FUNCIONES_H_
