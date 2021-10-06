/*!
 * @file   funciones.h
 * @brief  Funcion para descomponer numero
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   19/5/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

// Borrá la función foo y reemplazala con la solución al ejercicio.
// No te olvides de modificar la documentación también!
/*!
 * @brief Descompone un numero ingresado y lo expresa como un polinomio de potencias. 
 *        Tambien devuelve la cantidad de digitos para representar dicho numero
 * @param[in] numero Numero entero a descomponer
 * @param[in] sistema Sistema de numeración (Octa,Hexa,Binario)
 * @return Cantidad de bits necesario para representar ese numero ingresado. Retorna -1 en caso de que se ingrese un sistema invalido. Retorna -2 en caso de que se ingrese un numero igual o menor a cero.
 * 
 */
int descomponer_numero(int numero,int sistema);

#endif  // FUNCIONES_H_
