/*!
 * @file   funciones.h
 * @brief  Funciones para encriptar contenido
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   23/09/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

enum retorno
{
    EXITO = 0,
    ERROR = -1
};

/*!
 * @brief Encripta un archivo utilizando un algoritmo simple: 
 * A cada caracter comprendido entre la a y la m se le sumará 13 y a cada caracter entre la n y la z se le restará 13.
 * @param[in] origen Archivo de entrada
 * @param[in] destino Archivo de salida (encriptado)
 * @return Retorna EXITO (0) o ERROR (-1)
 */
int encriptado(FILE* origen, FILE* destino);

/*!
 * @brief Crea un buffer dinamico para alojar el contenido de un archivo
 * @param[out] buffer Buffer dinamico
 * @param[in] archivo Archivo a copiar en buffer
 * @return Retorna EXITO (0) o ERROR (-1)
 */
int crear_buffer(char** buffer, FILE* archivo);

#endif  // FUNCIONES_H_

