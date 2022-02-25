

/**
 * @brief  Genera un numero aleatorio entre 70 y 120.
 * @return Retorna el numero aleatorio generado [71-120].
 */
int getRandom(void);
//int getPromedio(void);

//void* promedioAsignado(void*carr);
/**
 * @brief Setea un tiempo random al campo tiempo del elemento carr.
 * @param bici Es el elemento con el cual buscara el campo para setearle el tiempo.
 */

void* tiempoSeteado(void*carr);

/**
 * @brief  compara el tipo del elemento con el campo asignado.
 * @param  bici Es el elemento con el cual buscara el campo ''tipo'' para filtrar.
 * @return Retorna 1 si el campo del elemento coincide con ''MX1'', sino retorna 0.
 */
int filterMX1(void*carr);

/**
 * @brief  compara el tipo del elemento con el campo asignado.
 * @param  bici Es el elemento con el cual buscara el campo ''tipo'' para filtrar.
 * @return Retorna 1 si el campo del elemento coincide con ''MX2'', sino retorna 0.
 */
int filterMX2(void*carr);

/**
 * @brief  compara el tipo del elemento con el campo asignado.
 * @param  bici Es el elemento con el cual buscara el campo ''tipo'' para filtrar.
 * @return Retorna 1 si el campo del elemento coincide con ''MX3'', sino retorna 0.
 */
int filterMX3(void*carr);

/**
 * @brief  compara el tipo del elemento con el campo asignado.
 * @param  bici Es el elemento con el cual buscara el campo ''tipo'' para filtrar.
 * @return Retorna 1 si el campo del elemento coincide con ''SUPER_ATV'', sino retorna 0.
 */
int filterSuper_ATV(void*carr);
