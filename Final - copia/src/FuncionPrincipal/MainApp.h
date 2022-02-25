

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../LinkedList.h"

#ifndef MAINAPP_MAINAPP_H_
#define MAINAPP_MAINAPP_H_

/**
 * @brief	Simulate the systemPause in linux.
 */
void enterToContinue(void);

/**
 * @brief Pointer to function, with many actions.
 * @param messageError1
 * @param messageError2
 * @param messageSucess
 * @param flag
 * @param flagValue
 * @param NewflagValue
 * @param path
 * @param array
 * @param pFunction
 */
void pFunctionLoadBinCsv(char* messageError1,char* messageError2,char* messageSucess,int* flag,int flagValue,
		int NewflagValue,char*path,LinkedList* array,int(*pFunction)(char*,LinkedList*));

/**
 * @brief 	Execute all the functions of the ABM.
 * @return  Return 1 if success, else return 0 if error.
 */
int ABM();

#endif /* MAINAPP_MAINAPP_H_ */
