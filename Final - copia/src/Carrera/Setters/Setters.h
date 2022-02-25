
#include "../Carr.h"

#ifndef LIBRARY_Object_SETTERS_SETTERS_H_
#define LIBRARY_Object_SETTERS_SETTERS_H_

/**
 * @brief coloca el promedio
 * @param this
 * @param tiempo
 * @return 1 si pudo, sino 0
 */
//int Object_setPromedio(eCarrera *this, int promedio)

/**
 * @brief coloca el tiempo
 * @param this
 * @param tiempo
 * @return 1 si pudo, sino 0
 */
int Object_setTiempo(eCarrera *this, int tiempo);

/**
 * @brief  coloca el tipo
 * @param this
 * @param tipo
 * @return 1 si pudo, sino 0
 */
int Object_setTipo(eCarrera *this, char *tipo);

/**
 * @brief  coloca el duenho
 * @param this
 * @param duenho
 * @return 1 si pudo, sino 0
 */
int Object_setDuenho(eCarrera *this, char *duenho);

/**
 * @brief  coloca el id
 * @param this
 * @param id
 * @return 1 si pudo, sino 0
 */
int Object_setID(eCarrera *this, int *id);



#endif /* LIBRARY_Object_SETTERS_SETTERS_H_ */
