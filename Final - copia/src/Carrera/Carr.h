

#include "../LinkedList.h"

#ifndef Object_H_INCLUDED
#define Object_H_INCLUDED

typedef struct {
    int id;
	char duenho[128]; // nombre
	char tipo[128]; //
	int tiempo; // tiempo
    //int promedio; //promedio
} eCarrera;

/**
 * @brief  Search the index of the bicicleta by id.
 * @param  this
 * @param  id
 * @return Return the index if can, else -1.
 */
int Carrera_SearchForId(LinkedList *this, int id);

/**
 * @brief  Buids a bicicleta.
 * @return Return the bicicleta.
 */
eCarrera* Object_new();

/**
 * @brief  crea la bicicleta
 * @param id
 * @param duenho
 * @param tipo
 * @param tiempo
 * @return la bicicleta
 */
eCarrera* Object_newParam(char *id, char *duenho, char *tipo, char *tiempo/*, char *promedio*/);

/**
 * @brief Delete Object.
 * @param this
 */
void Object_delete(eCarrera *this);

/**
 * @brief  ordena por tiempo
 * @param tiempo1
 * @param tiempo2
 * @return 1 si pudo, sino 0
 */

//int Object_sortPromedio(void *promedio1, void *promedio2);

/**
 * @brief ordena por tipo
 * @param tipo1
 * @param tipo2
 * @return 1 si pudo, sino 0
 */
 int Object_sortTiempo(void *promedio1, void *promedio2);

/**
 * @brief ordena por tipo
 * @param tipo1
 * @param tipo2
 * @return 1 si pudo, sino 0
 */
int Object_sortTipo(void *tipo1, void *tipo2);

#endif // Object_H_INCLUDED
