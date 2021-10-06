/*!
 * @file   funciones_propias.h
 * @brief  Modulo adicional de funciones para operaciones bancarias
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   1/09/2021
 */
#ifndef FUNCIONES_PROPIAS_H_
#define FUNCIONES_PROPIAS_H_

/*!
 * @brief Limpia el buffer de entrada
 */
void clear_newlines(void);

/*!
 * @brief Funcion para el ingreso de datos de una cuenta bancaria por el usuario.
 * @param[in] cuentas Struct de Cuenta bancaria.
 */
void ingreso_datos(cuenta_t* cuenta);

/*!
 * @brief Funcion para ingresar strings por stdin y devolverlos por referencia
 * @param[out] ptr Puntero de salida
 * @param[in] size Tamaño maximo del string
 */
void get_string(char* ptr, int size);

/*!
 * @brief Reordena el array dinamico de cuentas (para funcion eliminar cuenta)
 * @param[in] cuentas Array dinamico de cuentas bancarias
 * @param[in] cantidad_cuentas Cantidad actual de cuentas bancarias
 * @param[in] nro_usuario El usuario a eliminar (usuario de referencia para reordenar el array)
 */
void reordenar_cuentas(cuenta_t* cuentas, int cantidad_cuentas, int nro_usuario);

#endif  // FUNCIONES_PROPIAS_H_

