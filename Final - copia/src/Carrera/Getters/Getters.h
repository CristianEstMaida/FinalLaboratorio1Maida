
#ifndef LIBRARY_Object_GETTERS_GETTERS_H_
#define LIBRARY_Object_GETTERS_GETTERS_H_

/**
 * @brief  Get the data of the field tipo.
 * @param  this
 * @param  tipo
 * @return Return 1 if can, else 0.
 */
int Object_getTipo(eCarrera *this, char *tipo);

/**
 * @brief  Get the data of the field tiempo.
 * @param  this
 * @param  tiempo
 * @return Return 1 if can, else 0.
 */
int Object_getTiempo(eCarrera *this, int *tiempo);

/**
 * @brief  Get the data of the field promedio.
 * @param  this
 * @param  promedio
 * @return Return 1 if can, else 0.
 */
//int Object_getPromedio(eCarrera *this, int *promedio);


/**
 * @brief  Get the data of the field duenho.
 * @param  this
 * @param  duenho
 * @return Return 1 if can, else 0.
 */
int Object_getDuenho(eCarrera *this, char *duenho);

/**
 * @brief  Get the data of the field id.
 * @param  this
 * @param  id
 * @return Return 1 if can, else 0.
 */
int Object_getID(eCarrera *this, int *id);

#endif /* LIBRARY_Object_GETTERS_GETTERS_H_ */
