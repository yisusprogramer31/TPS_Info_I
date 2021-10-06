/*!
 * @file   funciones.h
 * @brief  Codificacion a Cesar
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   15/6/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/*!
 * @param[in] frase Frase a codificar en Cesar. Solamente funciona con letras mayusculas
 * @return Retorna 1 si todo salio bien
 * Retorna 0 si hubo algun error
 * Retorna -2 si recibe puntero NULL
 */
int a_cesar(char*);

#endif  // FUNCIONES_H_
