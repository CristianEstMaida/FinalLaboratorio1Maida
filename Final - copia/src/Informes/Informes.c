
#include <ctype.h>
#include <stdio.h> //windows
//#include <stdio_ext.h> linux
#include <stdlib.h>
#include <string.h>

#include "Informes.h"
#include "../Carrera/Carr.h"
#include "../Carrera/Setters/Setters.h"

int getRandom(void){
	int aleatorio;
	aleatorio = rand()% 50 + 71;

	return aleatorio;
}


int getPromedio(void){
	int promedio;

	if(getRandom()< 15){
        promedio = 6;
	}
	if(getRandom() >= 15 && getRandom() <= 20){
        promedio = 8;
	}
	if(getRandom() > 20){
        promedio = 10;
	}

	return promedio;
}

void* tiempoSeteado(void*carr){
	eCarrera* carrera = NULL;

	if(carr!=NULL){
		carrera = (eCarrera*)carr;
		Object_setTiempo(carrera, getRandom());

	}
	return carrera;
}

void* promedioAsignado(void*carr){
	eCarrera* carrera = NULL;

	if(carr!=NULL){
		carrera = (eCarrera*)carr;
		Object_setTiempo(carrera, getRandom());

	}
	return carrera;
}

int filterMX3(void*carr){
	int sucess = 0;

	eCarrera* carrera;
	if(carr!=NULL){

		carrera = (eCarrera*)carr;
		if(strcmp(carrera->tipo,"MX3")==0){
			sucess = 1;
		}
	}

	return sucess;
}

int filterMX1(void*carr){
	int sucess = 0;

	eCarrera* carrera;
	if(carr!=NULL){

		carrera = (eCarrera*)carr;
		if(strcmp(carrera->tipo,"MX1")==0){
			sucess = 1;
		}
	}

	return sucess;
}

int filterMX2(void*carr){
	int sucess = 0;

	eCarrera* carrera;
	if(carr!=NULL){

		carrera = (eCarrera*)carr;
		if(strcmp(carrera->tipo,"MX2")==0){
			sucess = 1;
		}
	}

	return sucess;
}

int filterSuper_ATV(void*carr){
	int sucess = 0;

	eCarrera* carrera;
	if(carr!=NULL){

		carrera = (eCarrera*)carr;
		if(strcmp(carrera->tipo,"SUPER_ATV")==0){
			sucess = 1;
		}
	}

	return sucess;
}
