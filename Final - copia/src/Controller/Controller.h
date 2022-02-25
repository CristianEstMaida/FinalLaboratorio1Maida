

#include "../LinkedList.h"

/**
 * @brief	Load data from the path [Text] and upload to LL.
 * @param 	path
 * @param 	this
 * @return	Return 1 if can, else 0.
 */
int controller_loadFromText(char *path, LinkedList *this);

/**
 * @brief	Prints all the knights in the screen.
 * @param 	this
 * @return	Return 1 if can, else 0.
 */
int controller_ListObject(LinkedList *this);

/**
 * @brief	Save the data of the LL in the path [Text Mode]
 * @param 	path
 * @param 	this
 * @return	Return 1 if can, else 0.
 */
int controller_saveAsText(char *path, LinkedList *this);
