/*!
 * @file   funciones.h
 * @brief  Modulo lectura de archivos
 * @author Jesus Maria Maresca <jemaresca@frba.utn.edu.ar>
 * @date   25/09/2021
 */
#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#define SIZE_MAX 30 // Largo maximo de cada string de los campos del struct
#define CANT_NOTAS 11

enum retorno
{
    EXITO = 0,
    ERROR = -1,
    ERROR_MEM = -2
};

typedef struct gente
{
    char nombre[SIZE_MAX];
    char apellido[SIZE_MAX];
    int calificacion;
} gente_t;

/*!
 * @brief Genera un array dinamico de estructuras usando como registro a un archivo
 * @param[out] array Array dinamico de estructuras
 * @param[out] registros Cantidad de estructuras en el array dinamico
 * @param[in] archivo Archivo de entrada para la extraccion de datos para cada registro
 * @return Retorna EXITO (0), ERROR (-1) o ERROR_MEM (-2)
 */
int generar_array(gente_t** array, int* registros, FILE* archivo);

/*!
 * @brief Genera la copia del contenido del buffer a cada campo de la estructura
 * @param[in] array Array dinamico de estructuras
 * @param[in] buffer Buffer temporal para realizar la copia
 */
void generar_copia(gente_t* array, char* buffer);

/*!
 * @brief Asigna cantidad de calificaciones correspondientes a cada nota (0-10) a un array
 * @param[in] array Array dinamico de estructuras
 * @param[in] registros Cantidad de estructuras en el array dinamico
 * @param[out] calificaciones Vector estatico de calificaciones
 * @return Retorna EXITO (0) o ERROR (-1) 
 */
int clasificar_calificaciones(gente_t* array, int registros, int* calificaciones);

/*!
 * @brief Imprime un array de estructuras
 * @param[in] array Array de estructuras
 * @param[in] registros Cantidad de registros actual
 */
void imprimir_array(gente_t* array, int registros);

#endif  // FUNCIONES_H_

