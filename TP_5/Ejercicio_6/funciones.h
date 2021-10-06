/*!
 * @file   funciones.h
 * @brief  Funcion copia de contenido de array
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   5/5/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/*!
 * @brief Copia el contenido del array origen en el destino
 * @param[in] arreglo_destino Array destino
 * @param[in] arreglo_origen Array origen
 * @param[in] largo_destino Largo del array destino
 * @param[in] largo_origen Largo del array origen
 * @return Devuelve cantidad bytes copiados. 
 * Si no se puede realizar la copia devuelve -1. 
 * Si alguno de los punteros es NULL devuelve -2
 */
int array_copy(float*, int , const float*, int);


/*!
 * @brief Imprime el contenido de un array tipo float
 * @param[in] arreglo Array a imprimir
 * @param[in] largo Largo del array
 */
void print_array(const float* arreglo, int largo);

#endif  // FUNCIONES_H_
