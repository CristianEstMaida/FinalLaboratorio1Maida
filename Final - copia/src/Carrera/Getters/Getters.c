

#include <stdio.h>//windows
//#include <stdio_ext.h>linux
#include <stdlib.h>
#include <string.h>

#include "../Carr.h"

/* Getter: [ID] */
int Object_getID(eCarrera *this, int *id) {
	int sucess = 0;

	if (this != NULL && id != NULL) {
		*id = this->id;
		sucess = 1;
	}
	return sucess;
}

/* Getter: [Tipo] */
int Object_getTipo(eCarrera *this, char *tipo) {
	int sucess = 0;

	if (this != NULL && tipo != NULL) {
		strcpy(tipo, this->tipo);
		sucess = 1;
	}
	return sucess;
}

/* Getter: [Duenho] */
int Object_getDuenho(eCarrera *this, char *duenho) {
	int sucess = 0;

	if (this != NULL && duenho != NULL) {
		strcpy(duenho, this->duenho);
		sucess = 1;
	}
	return sucess;
}

/* Getter: [Tiempo] */
int Object_getTiempo(eCarrera *this, int *tiempo) {
	int sucess = 0;

	if (this != NULL && tiempo != NULL) {
		*tiempo = this->tiempo;
		sucess = 1;
	}
	return sucess;
}

/* Getter: [Promedio] */
/*int Object_getPromedio(eCarrera *this, int *promedio) {
	int sucess = 0;

	if (this != NULL && promedio != NULL) {
		*promedio = this->promedio;
		sucess = 1;
	}
	return sucess;
}
*/
