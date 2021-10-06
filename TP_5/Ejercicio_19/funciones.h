/*!
 * @file   funciones.h
 * @brief  Funcion computo de matrices
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   7/6/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/*!
 * @brief Computa la operacion entre dos matrices (Suma,Resta,Multiplicacion y Division)
 * @param[in] matriz_a Matriz A   
 * @param[in] matriz_b Matriz B
 * @param[in] filas Filas de la matriz
 * @param[in] columnas Columnas de la matriz
 * @param[in] operacion Operador (simbolo)
 * @param[in] matriz_resultado Devuelve con un puntero la matriz resultado
 * @return Devuelve -1 si hubo un error en la operacion entre la matriz A y B (division por 0)
 * Devuelve 0 si no hubo ningun error
 * Devuelve -2 si hay punteros NULL
 * Devuelve -3 si se ingreso un operador invalido
 */
int computar_matriz_matriz(const double* matriz_a, const double* matriz_b, int filas, 
int columnas, char operacion, double* matriz_resultado);

void array_print(const double* matriz, int filas, int columnas);

void array_scan(double* matriz, int filas, int columnas);

#endif  // FUNCIONES_H_
