/*!
 * @file   funciones.h
 * @brief  Modulo operador de cuentas bancarias
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   1/09/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#define LARGO_STRING 26 // Largo del string de cada campo de la estructura

typedef enum opciones
{
    AGREGAR = 1,
    ELIMINAR,
    IMPRIMIR_CUENTA,
    IMPRIMIR_TODO,
    DEPOSITAR,
    EXTRAER,
    SALIR,

} opciones_t;

typedef enum Estado
{
    EXITO = 0, // Devuelve 0 si salio todo bien
    ERROR = -1, // Devuelve -1 si hubo algun error de punteros NULL, parametros invalidos u otro error de operacion comun
    ERROR_MEM = -2, // Devuelve -2 si hubo algun error al asignar memoria con Malloc o Realloc
    ERROR_BUSQUEDA = -3 // Devuelve -3 si no hubo ninguna coincidencia del usuario ingresado dentro del array 

} return_state;

typedef struct Cuenta
{
    char nombre[LARGO_STRING];
    char usuario[LARGO_STRING];
    char contrasena[LARGO_STRING];
    int dni;
    time_t tiempo;
    float dinero;

} cuenta_t;

/*!
 * @brief Agrega una cuenta al vector de cuentas, reservando la memoria necesaria. 
 * @param[in] cuentas Array dinamico de las cuentas bancarias.
 * @param[in] cantidad_cuentas Cantidad de cuentas bancarias actuales.
 * @param[in] cuenta Datos de la cuenta a ingresar en el sistema.
 * @return Retorna EXITO (0), ERROR (-1) o ERROR_MEM (-2)
 */
int cuentas_agregar(cuenta_t** cuentas, int* cantidad_cuentas, cuenta_t* cuenta);

/*!
 * @brief Elimina una cuenta del vector de cuentas (por usuario), liberando la memoria asociada.
 * @param[in] cuentas Array dinamico de las cuentas bancarias.
 * @param[in] cantidad_cuentas Cantidad de cuentas bancarias actuales.
 * @param[in] usuario Usuario a eliminar del sistema.
 * @return Retorna EXITO (0), ERROR (-1), ERROR_MEM (-2) o ERROR_BUSQUEDA (-3)
 */
int cuentas_eliminar(cuenta_t** cuentas, int* cantidad_cuentas, char* usuario);

/*!
 * @brief Realiza un depósito a una cuenta del vector de cuentas (por usuario).
 * @param[in] cuentas Array dinamico de las cuentas bancarias.
 * @param[in] cantidad_cuentas Cantidad de cuentas bancarias actuales.
 * @param[in] usuario Usuario a ingresar dinero.
 * @param[in] monto Cantidad de dinero a ingresar.
 * @return Retorna EXITO (0), ERROR (-1) o ERROR_BUSQUEDA (-3)
 */
int cuentas_deposito(cuenta_t* cuentas, int cantidad_cuentas, char* usuario, float monto);

/*!
 * @brief Realiza una extracción de una cuenta del vector de cuentas (por usuario).
 * @param[in] cuentas Array dinamico de las cuentas bancarias.
 * @param[in] cantidad_cuentas Cantidad de cuentas bancarias actuales.
 * @param[in] usuario Usuario a extraer dinero.
 * @param[in] monto Cantidad de dinero a extraer.
 * @return Retorna EXITO (0), ERROR (-1) o ERROR_BUSQUEDA (-3)
 */
int cuentas_extraccion(cuenta_t* cuentas, int cantidad_cuentas, char* usuario, float monto);

/*!
 * @brief Imprime el estado de una cuenta en pantalla en un formato determinado:
 * @param[in] cuenta Cuenta bancaria a imprimir.
 */
void cuenta_imprimir(cuenta_t* cuenta);

/*!
 * @brief Imprime el contenido del vector cuentas.
 * @param[in] cuentas Cuentas bancarias a imprimir.
 * @param[in] cantidad_cuentas Cantidad de cuentas actuales.
 */
void cuentas_imprimir(cuenta_t* cuentas, int cantidad_cuentas);

/*
FORMATO DE SALIDA DE IMPRESIÓN DE ESTADO DE CUENTAS: 
Banco Gringotts
Nymphadora Tonks - @tonks
DNI: 123456789

Saldo: 654321
Última actividad: 14:12 - 10/04/98
*/

#endif  // FUNCIONES_H_

