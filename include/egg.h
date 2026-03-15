/***************************************************** PUBLIC INTERFACE *******************************************************/

#ifndef EGGS_H
#define EGGS_H

typedef struct _egg Egg;

/**
 * @brief Cria os ovos de páscoa, e pede pra pra alocar na lista
 * 
 * @param identifier Identificador do ovo de páscoa
 * @param price Preco do ovo de páscoa
 * @return Eggs* 
 */
Egg *EggCreate(int identifier, float price);

/**
 * @brief Retorna o identificador do ovo de páscoa
 * 
 * @param egg O ovo de páscoa
 */
int EggGetIidentifier(Egg *egg);

/**
 * @brief Retorna o preço do ovo de pasco
 * 
 * @param egg O ovo de páscoa
 */
float EggGetPrice(Egg *egg);

/**
 * @brief Retorna o próximo ovo de pasco na lista
 * 
 * @param egg O ovo de páscoa
 */
Egg *EggGetNext(Egg *egg);

/**
 * @brief Atribui um identificador ao ovo de páscoa
 * 
 * @param egg O ovo de páscoa
 * @param identifier O identificador do ovo de páscoa
 */
void EggSetIidentifier(Egg *egg, int identifier);

/**
 * @brief Atribui um preço ao ovo de páscoa
 * 
 * @param egg O ovo de páscoa
 * @param price O preço do ovo de páscoa
 */
void EggSetPrice(Egg *egg, float price);

/**
 * @brief Atribui o ovo de pasco seguinte na lista
 * 
 * @param egg O ovo de páscoa
 * @param next O próximo ovo de páscoa
 */
void EggSetNext(Egg *egg, Egg *next);

#endif

/******************************************************************************************************************************/