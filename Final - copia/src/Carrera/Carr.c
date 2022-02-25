

#include <stdio.h> // windows
//#include <stdio_ext.h>  linux
#include <stdlib.h>
#include <string.h>

#include "Carr.h"
#include "Setters/Setters.h"
#include "Getters/Getters.h"

// Constructors
eCarrera* Object_new() {
	eCarrera *newObject;
	newObject = (eCarrera*) calloc(sizeof(eCarrera), 1);

	return newObject;
}

eCarrera* Object_newParam(char *id, char *duenho, char *tipo, char *tiempo) {
	eCarrera *newObject;
	newObject = Object_new();

	int auxId;
	int auxTiempo;

	auxId = atoi(id);
	auxTiempo = atoi(tiempo);

	if (newObject != NULL && id != NULL && tipo != NULL && duenho != NULL && tiempo != NULL) {
		Object_setDuenho(newObject, duenho);
		Object_setTiempo(newObject, auxTiempo);
		Object_setTipo(newObject, tipo);
		Object_setID(newObject, &auxId);
	}
	return newObject;
}

/*eCarrera* Object_newParam(char *id, char *duenho, char *tipo, char *tiempo, char*promedio) {
	eCarrera *newObject;
	newObject = Object_new();

	int auxId;
	int auxTiempo;
	int auxPromedio;

	auxId = atoi(id);
	auxTiempo = atoi(tiempo);
	auxPromedio = atoi(promedio);

	if (newObject != NULL && id != NULL && tipo != NULL && duenho != NULL && tiempo != NULL && promedio != NULL) {
		Object_setDuenho(newObject, duenho);
		Object_setPromedio(newObject, auxPromedio);
		Object_setTiempo(newObject, auxTiempo);
		Object_setTipo(newObject, tipo);
		Object_setID(newObject, &auxId);
	}
	return newObject;
}*/

// Searchers
int Carrera_SearchForId(LinkedList *this, int id) {
    int retorno = -1;
    int idAux;
    eCarrera *pObject;

	for (int index = 0; index < ll_len(this); index++) {
		pObject = ll_get(this, index);
		if (Object_getID(pObject, &idAux) == 1 &&
           idAux == id){
            retorno = index;
        }
    }
    return retorno;
}


//Destructors
void Object_delete(eCarrera *this) {
	if (this != NULL) {
		free(this);
		this = NULL;
	}
}

/* Function/SortBy: [tipo] */
int Object_sortTipo(void *tipo1, void *tipo2) {
	char tipo_1[20];
	char tipo_2[20];
	int sucess = 0;

	Object_getTipo(tipo1, tipo_1);
	Object_getTipo(tipo2, tipo_2);

	if (strcmp(tipo_1, tipo_2) > 0) {
		sucess = 1;
	} else if (strcmp(tipo_1, tipo_2) < 0) {
		sucess = -1;
	}

	return sucess;
}

int Object_sortTiempo(void *tiempo1, void *tiempo2) {
int tiempo_1;
int tiempo_2;
int sucess = 0; // si los tiempos son iguales, devuelve 0

Object_getTiempo(tiempo1, &tiempo_1);
//Object_getPromedio(tiempo2, &tiempo_2);

if (tiempo_1 > tiempo_2) {
	sucess = 1;
} else if (tiempo_1 < tiempo_2) {
	sucess = -1;
	}
	return sucess;
}


/* Function/SortBy: [Promedio] */
//int Object_sortPromedio(void *promedio1, void *promedio2) {
//int promedio_1;
//int promedio_2;
//int sucess = 0; // si los tiempos son iguales, devuelve 0

//Object_getPromedio(promedio1, &promedio_1);
//Object_getPromedio(promedio2, &promedio_2);

//if (promedio_1 > promedio_2) {
//	sucess = 1;
//} else if (promedio_1 < promedio_2) {
//	sucess = -1;
//	}
//	return sucess;
//}
