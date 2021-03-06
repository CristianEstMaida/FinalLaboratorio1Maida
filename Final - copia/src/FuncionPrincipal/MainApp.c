

#include <ctype.h>
#include <stdio.h> //windows
//#include <stdio_ext.h> linux
#include <stdlib.h>
#include <string.h>

#include "../LinkedList.h"
#include "../Validate/authorValidate.h"
#include "../Carrera/Carr.h"
#include "../Controller/Controller.h"
#include "../MenuPrincipal/MainMenu.h"
#include "../Carrera/Setters/Setters.h"
#include "../Informes/Informes.h"

#define OPEN 1
#define CLOSED 0

void enterToContinue(void) {
	printf("    [Message]: Presione [Enter] para continuar...");
	getchar();
	//__fpurge(stdin);  Linux
	fflush(stdin); // Windows
}

void pFunctionLoadBinCsv(char* messageError1,char* messageError2,char* messageSucess,int* flag,int flagValue,
		int NewflagValue,char*path,LinkedList* array,int(*pFunction)(char*,LinkedList*)){
	int flagForCompare = *flag; // traigo el valor del flag para comparar despues.
	if(flagForCompare==flagValue){ // si es 1 es xq esta abierto
		//printf("\n    [ERROR 0001]: Archivo abierto/cerrado, primero guardelo/carguelo.\n");
		printf("%s",messageError1);
	}else{
		if (!pFunction(path,array)) {
			//printf("\n    [ERROR 1010]: Imposible abrir/guardar archivo.\n\n");
			printf("%s",messageError2);
		} else {
			//printf("\n    Archivo abierto/guardado con exito.\n");
			printf("%s",messageSucess);
			*flag = NewflagValue; // Actualizo el flag a 1 si lo abri y a 0 si lo guarde.
		}
	}
}

void pFunction(char* messageError1,char* messageError2,char* messageSucess,int* flag,int flagValue
		,LinkedList* array,int(*pFunction)(LinkedList*)){
	int flagForCompare = *flag;
	if(flagForCompare==flagValue){
		printf("\n%s\n",messageError1);
	}else{
		if (!pFunction(array)) {
			printf("\n%s\n",messageError2);
		} else {
			printf("\n%s\n",messageSucess);
			//*flag =NewflagValue;
		}
	}
}

void saveData(int loadOrWrite, LinkedList *thisOriginal) {
	pFunctionLoadBinCsv( // Guardar modo texto
	"    [Message]: [ERROR 0101]: Error al cargar [CSV o Bin].\n",
	"    [Message]: [ERROR 0100]: Archivo csv no cargado.\n",
	"    [Message]: Se guardo el archivos en Texto con exito.\n",
	&loadOrWrite,CLOSED, OPEN, "lista.csv", thisOriginal,controller_saveAsText);
}

void logout(char *confirm, char *answer, LinkedList *thisOriginal, LinkedList* thisCopy,
		int *loadOrWrite) {
	printf(
			"    _______________________________________________________________\n"
			"    [Message]: Menu de ABM\n"
			"    _______________________________________________________________\n"
			"    [Message]: Confirma Salir? Y/N: ");
	//__fpurge(stdin); linux
	fflush(stdin); // windows
	getString(confirm, sizeof(*confirm));
	*confirm = tolower(*confirm);
	if (*confirm == 'y') {
		saveData(*loadOrWrite, thisOriginal); //guardo datos en csv y bin antes de salir.
		printf("    [Message]: Gracias, Esperamos volverte a ver! \n");
		//system("pause"); // windows
		//enterToContinue(); //linux
		if(thisOriginal!=NULL){
			ll_deleteLinkedList(thisOriginal);
			if(thisCopy!=NULL){
				ll_deleteLinkedList(thisCopy);
			}
		}
		*answer = 'n';
	}
}

int ABM() {

	char confirm;
	char answer = 'y';
	int loadOrWrite = 0;
	char path[128];
	int type;

	LinkedList* filtrada= ll_newLinkedList();
	LinkedList* arrayOriginal = ll_newLinkedList();
	if(ll_isEmpty(arrayOriginal)){ //chequeo que la lista este vacia.
		printf("    _______________________________________________________________\n"
				"    [Message]: Lista inicializada con exito!\n");
	}

	do {
		switch (menu()) {
		case 1: // cargar datos
			utn_getNombre(path, 128, "    Ingrese el nombre del archivo que desea abrir (sin la extension del archivo): \n"
					"    Ejemplo enduro: ", "    Nombre incorrecto, reintente.\n", 5);
			strncat(path,".csv",128);
			printf("_______________________________________________________________\n"
					"    El archivo a abrir sera: %s \n",path);
			pFunctionLoadBinCsv(
			//Cargo los datos al iniciar el programa.
			"    [Message]: [ERROR 0001]: Archivo abierto, primero guardelo.\n",
			"    [Message]: [ERROR 0010]: Archivos Csv no cargados.\n",
			"    [Message]: Datos cargados con exito!.\n", &loadOrWrite,
			OPEN, OPEN, path, arrayOriginal,controller_loadFromText);
			break;
			//***************************************************************************
		case 2: /* Listar Objetos */
			if(controller_ListObject(arrayOriginal)){
				printf("_______________________________________________________________\n"
						"    [Message]: Datos listados con exito!\n");
			}
			break;
			//***************************************************************************
		case 3: /* Generar promedio */
			//arrayOriginal = ll_map(arrayOriginal, tiempoSeteado);
			//if(controller_ListObject(arrayOriginal)){
				//printf("_______________________________________________________________\n"
					//	"    [Message]: Promedios asignados con exito!\n");*/
			//}
			break;
			//***************************************************************************
		case 4: /* Filtrar por tipo  */
			utn_getNumero(&type, "    [Message]: Seleccione un numero correspondiente al tipo.\n"
								   "    [1] - MX1.\n"
								   "    [2] - MX2.\n"
								   "    [3] - MX3.\n"
								   "    [4] - SUPER_ATV.\n"
								   "    [Opcion Elegida]: ",
								   "    [Message]: opcion incorrecta, seleccione entre [1-4].\n", 1, 4, 5);
			printf("_______________________________________________________________\n");
			switch(type){
			case 1:
				filtrada = ll_filter(arrayOriginal, filterMX1);
				if(controller_ListObject(filtrada)){
					controller_saveAsText("MX1.csv", filtrada);
					printf("_______________________________________________________________\n"
							"    [Message]: Lista filtrada y guardada como MX1.csv\n");
				}
				break;
			case 2:
				filtrada = ll_filter(arrayOriginal, filterMX2);
				if(controller_ListObject(filtrada)){
					controller_saveAsText("MX2.csv", filtrada);
					printf("_______________________________________________________________\n"
							"    [Message]: Lista filtrada y guardada como MX2.csv\n");
				}
				break;
			case 3:
				filtrada = ll_filter(arrayOriginal, filterMX3);
				if(controller_ListObject(filtrada)){
					controller_saveAsText("MX3.csv", filtrada);
					printf("_______________________________________________________________\n"
							"    [Message]: Lista filtrada y guardada como MX3.csv\n");
				}
				break;
			case 4:
				filtrada = ll_filter(arrayOriginal, filterSuper_ATV);
				if(controller_ListObject(filtrada)){
					controller_saveAsText("SUPER_ATV.csv", filtrada);
					printf("_______________________________________________________________\n"
							"    [Message]: Lista filtrada y guardada como SUPERATV.csv\n");
				}
				break;
			default:
				break;
			}
			break;
			//***************************************************************************
		case 5: /* Ordenar */
			if(arrayOriginal!=NULL){
				if(!ll_Megasort(arrayOriginal, Object_sortTipo, Object_sortTiempo, 1)){
					controller_ListObject(arrayOriginal);
					printf("_______________________________________________________________\n"
							"    [Message]: Ordenado por tipo y Promedio.\n");
				}
			}
			break;
			//***************************************************************************
		case 6: /* guardar */
			if (arrayOriginal!=NULL){
				controller_saveAsText("posiciones.csv", arrayOriginal);
				printf("_______________________________________________________________\n"
						"    [Message]: Guardado con exito como posiciones.csv\n");
			}
			break;
			//***************************************************************************
		case 7: /* Salir */
			//system("color 03");
			logout(&confirm, &answer, arrayOriginal,filtrada, &loadOrWrite); //pregunto para salir y guardo en csv y bin.
			break;
			//***************************************************************************
		default:
			printf("_______________________________________________________________\n"
					"    [Message]: [ERROR 1101]: Opcion incorrecta, use [1-7].\n");
			break;
			//***************************************************************************
		}
		//enterToContinue();  linux
		//system("clear");  linux
		system("pause"); // windows
		system("cls"); // windows
	} while (answer == 'y');
	return 1;
}
