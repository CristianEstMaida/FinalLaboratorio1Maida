

#ifndef AUTHOR_VALIDATE_H_
#define AUTHOR_VALIDATE_H_

/**
* @brief	Lee de stdin hasta que encuentra un '\n' o hasta que haya copiado en cadena
* 			un m ximo de ' longitud - 1' caracteres (Solucion al fgets()).
* @param	pResultado Puntero al espacio de memoria donde se copiara la cadena obtenida
* @param	longitud Define el tama o de cadena
* @return	Retorna 0 (EXITO) si se obtiene una cadena y -1 (ERROR) si no
*/
int myGets(char *string, int longitud);

/**
* @brief	Verifica si la cadena ingresada es numerica.
* @param	cadena Cadena de caracteres a ser analizada.
* @return	Retorna 1 ( vardadero ) si la cadena es numerica y 0 ( falso ) si no lo es.
* @note		Es static, con lo cual no se puede listar el prototipo aca.
*/
int isNumber(char *string, int limite);

/**
* @brief	devuelve 0 si obtiene un entero desde la terminal.
* @param	pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
* @return	Retorna 0 (EXITO) si se obtiene un numero entero y -1 (ERROR) si no
* @note		Es static, con lo cual no se puede listar el prototipo aca.
*/
//static int getInt(int* pResultado);

/**
 * @brief	Solicita un numero al usuario, leuego de verificarlo devuelve el resultado
 * @param	pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * @param	mensaje Es el mensaje a ser mostrado
 * @param	mensajeError Es el mensaje de Error a ser mostrado
 * @param	minimo Es el numero maximo a ser aceptado
 * @param	maximo Es el minimo minimo a ser aceptado
 * @return	Retorna 0 si se obtuvo el numero y -1 si no.
 */
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);

/**
 * @brief 	Lee de stdin hasta que encuentra un '\n' o hasta que haya copiado en cadena
 * 			un m ximo de 'longitud - 1' caracteres.
 * @param	pResultado Puntero al espacio de memoria donde se copiara la cadena obtenida
 * @param	longitud Define el tama o de cadena
 * @return	Retorna 0 (EXITO) si se obtiene una cadena y -1 (ERROR) si no
 *
 */
int getString(char *string, int longitud);

/**
 * @brief	Obtiene un string valido como nombre
 * @param	pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * @return	Retorna 0 (EXITO) si se obtiene un numero flotante y -1 (ERROR) si no
 * @note	Es static con lo cual no se puede listar aca.
 */
//static int getNombre(char* pResultado, int longitud);

/**
 * @brief	Verifica si la cadena ingresada es un nombre valido
 * @param	cadena Cadena de caracteres a ser analizada
 * @return	Retorna 1 (verdadero) si la cadena es valida y 0 (falso) si no lo es
 *
 */
int esNombre(char *string, int longitud);

/**
 * @brief	Solicita un nombre al usuario, luego de verificarlo devuelve el resultado
 * @param	pResultado Puntero al espacio de memoria donde se dejara el resultado de la funcion
 * @param	longitud Es la longitud del array resultado
 * @param	mensaje Es el mensaje a ser mostrado
 * @param	mensajeError Es el mensaje de Error a ser mostrado
 * @param	reintentos Cantidad de reintentos
 * @return	Retorna 0 si se obtuvo el array y -1 si no
 *
 */
int utn_getNombre(char* pResultado, int longitud,char* mensaje, char* mensajeError, int reintentos);

/**
 * @fn void strMayuscula(char[])
 * @brief	Pone la cadena en mayusculas.
 * @param	cadena cadena a convertir
 */
void strMayuscula(char string[]);

/**
 * @fn void strMinuscula(char[])
 * @brief	Pone la cadena en minusculas.
 * @param	cadena cadena a convertir.
 */
void strMinuscula(char string[]);

/**
 * @fn void uppercaselInitial(char[])
 * @brief	Pone la primer letra en mayuscula y el resto en minuscula a cada palabra.
 * @param	string cadena a acomodar.
 */
void uppercaselInitial(char string[]);

#endif /* CAIDEV_VALIDATE_H_ */
