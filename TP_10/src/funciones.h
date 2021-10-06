/*!
 * @file   funciones.h
 * @brief  Prototipos, enumeraciones y estructuras del modulo de funciones 
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   23/09/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#define LARGO_STRING 26

enum Retorno
{
    EXITO = 0,
    ERROR = -1, // Error por punteros NULL o parametros invalidos
    ERROR_MEM = -2, // Error por falla de funciones memoria dinamica
    ERROR_BUSQUEDA = -3 // Error de busqueda por no encontrar cliente dentro de la cola
};

enum Menu
{
    INGRESO = 'c', // Letra para generar el ingreso de un cliente a la cola de espera
    ATENDER = 'a', // Letra para atender a un cliente y sacarlo de la lista de espera
    SALIR = 's' // Letra para salir del sistema
};

typedef struct cliente
{
    char nombre[LARGO_STRING];
    char apellido[LARGO_STRING];
    short int edad;
    int numero; // Numero de atencion generado automaticamente por el sistema

} cliente_t;

/* ############## FUNCIONES PRIMARIAS ############## */

/*!
 * @brief Permite que el usuario ingrese los datos del cliente a ingresar a la cola
 * @param[out] cliente Cliente a ingresar a la cola de espera
 * @param[in] largo Largo de la cola de espera. Sirve para generar numeros de atencion no repetidos
 */
void ingreso_datos(cliente_t* cliente, int largo);

/*!
 * @brief Ingresa un cliente a la cola de espera en el principio, quedando a lo ultimo el primer cliente ingresado
 * @param[out] cola Cola dinamica de espera
 * @param[out] largo Largo de la cola de espera
 * @param[in] cliente Copia de los datos del cliente
 * @return Retorna EXITO, ERROR_MEM o ERROR
 */
int ingresar_cola(cliente_t** cola, int* largo, cliente_t* cliente);

/*!
 * @brief Localiza un cliente que tenga un numero de atencion en especifico
 * @param[in] cola Cola dinamica de espera
 * @param[in] largo Largo de la cola de espera
 * @param[in] numero Numero del cliente a sacar de la lista de espera
 * @return Retorna el indice en el array dinamico de la cuenta elegida.
 * Tambien puede retornar ERROR o ERROR_BUSQUEDA.
 */
int localizar_cliente(cliente_t* cola, int largo, int numero);

/*!
 * @brief Atiende un cliente de la cola de espera
 * @param[out] cola Cola dinamica de espera
 * @param[out] largo Largo de la cola de espera
 * @param[in] indice Indice del array donde se encuentra el cliente a sacar
 * @return Retorna EXITO, ERROR_MEM o ERROR
 */
int atender_cola(cliente_t** cola, int* largo, int indice);

/*!
 * @brief Ingresa un cliente a la cola de espera
 * @param[in] cliente Cola dinamica de espera
 */
void imprimir_cliente(cliente_t* cliente);

/* ############## FUNCIONES AUXILIARES ############## */

/*!
 * @brief Limpia el buffer de entrada
 */
void clear_newlines(void);

/*!
 * @brief Ingreso de un string por el usuario
 * @param[out] string String de salida
 * @param[in] largo Largo maximo del string
 */
void get_string(char* string, int largo);

#endif  // FUNCIONES_H_
