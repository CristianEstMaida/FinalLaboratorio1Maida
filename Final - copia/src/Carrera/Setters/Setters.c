
#include <stdio.h>//windows
//#include <stdio_ext.h>linux
#include <stdlib.h>
#include <string.h>
#include "../../Controller/Controller.h"
#include "../../Validate/authorValidate.h"
#include "../../LinkedList.h"
#include "Setters.h"
#include "../Carr.h"

/* Setters: [ID] */
int Object_setID(eCarrera *this, int *id) {
	int sucess = 0;

	if (this != NULL) {
		if (id >= 0) {
			this->id = *id;
			sucess = 1;
		}
	}
	return sucess;
}

/* Setters: [Duenho] */
int Object_setDuenho(eCarrera *this, char *duenho) {
	int sucess = 0;

	if (this != NULL && duenho != NULL) {
		strncpy(this->duenho, duenho, 10);
		sucess = 1;
	}
	return sucess;
}

/* Setters: [Tipo] */
int Object_setTipo(eCarrera *this, char *tipo) {
	int sucess = 0;

	if (this != NULL && tipo != NULL) {
		strncpy(this->tipo, tipo, 10);
		sucess = 1;
	}
	return sucess;
}

/* Setters: [Promedio] */
/*int Object_setPromedio(eCarrera *this, int promedio) {
	int sucess = 0;

	if (this != NULL) {
		if (promedio >= 0) {
			this->promedio = promedio;
			sucess = 1;
		}
	}
	return sucess;
}*/

/* Setters: [Tiempo] */
int Object_setTiempo(eCarrera *this, int tiempo) {
	int sucess = 0;

	if (this != NULL) {
		if (tiempo >= 0) {
			this->tiempo = tiempo;
			sucess = 1;
		}
	}
	return sucess;
}
