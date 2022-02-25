

//#include <stdio_ext.h> linux
#include <stdio.h> // windows
#include <stdlib.h>
#include <string.h>
#include "../Validate/authorValidate.h"

int menu() {
	int option;
	printf("    \n"
					"    [Message]: Bienvenido \n"
			"    _______________________________________________________________\n"
			"    [Menu]\n"
			"    [1] Cargar archivo.\n"
			"    [2] Listar participantes.\n"
			"    [3] Asignar promedios.\n"
			"    [4] Filtrar por tipos de categorias de carreras.\n"
			"    [5] Mostrar posiciones [Ordenar].\n"
			"    [6] Guardar posiciones.\n"
			"    [7] Salir.\n");
	utn_getNumero(&option, "    [Message]: Escoje una opcion [1-8]:  ",
			"    [Message]: Opcion incorrecta.\n", 1, 8, 5);

	return option;
}
