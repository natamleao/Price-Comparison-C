/***************************************************** PUBLIC INTERFACE *******************************************************/

#ifndef LIST_H
#define LIST_H

#include "../include/egg.h"
#include <stddef.h>

typedef struct _list List;

/**
 * @brief Cria a lista de ovos de páscoa
 * 
 * @return List* 
 */
List *ListCreate();

/**
 * @brief Retorna o tamanho da lista de ovos
 * 
 * @param list A lista de ovos
 */
size_t ListGetSize(List *list);

/**
 * @brief Retorna o íncio da lista de ovos 
 * 
 * @param list A lista de ovos
 */
Egg *ListGetBegin(List *list);

/**
 * @brief Atribui o tamanho da lista de ovos
 * 
 * @param list A lista de ovos
 * @param size O tamanho da lista
 */
void ListSetSize(List *list, size_t size);

/**
 * @brief Atribui o início da lista de ovos
 * 
 * @param list A lista de ovos
 * @param begin O início da lista
 */
void ListSetBegin(List *list, Egg *begin);

/**
 * @brief Busca um item na lista
 * 
 * @param list A lista de ovos
 * @param identifier Identificador do ovo
 * @param f Flag para informar se o item pertence ou não a lista
 */
Egg *ListSearchItem(List *list, int identifier, int *f);

/**
 * @brief Adiciona o ovo de páscoa a lista de ovos
 * 
 * @param list Lista de ovos
 * @param identifier Identificador do ovo
 * @param price Preco do ovo
 */
void ListAdd(List *list, int identifier, float price);;

/**
 * @brief Atualiza o identificador de um ovo da páscoa
 * 
 * @param list Lista de ovos
 * @param identifier Identificador do ovo
 * @param newIdentifier O novo identificador do ovo
 */
void ListUpdateItemIdentifier(Egg *egg, int newIdentifier);

/**
 * @brief Atualiza o preço de um ovo da páscoa
 * 
 * @param list Lista de ovos
 * @param identifier Identificador do ovo
 * @param newPrice O novo preço do ovo
 */
void ListUpdateItemPrice(Egg *egg, float newPrice);

/**
 * @brief Atualiza o identificador e o preço de um ovo da páscoa
 * 
 * @param list Lista de ovos
 * @param identifier Identificador do ovo
 * @param newIdentifier O novo identificador do ovo
 * @param newPrice O novo preço do ovo
 */
void ListUpdateItem(Egg *egg, int newIdentifier, int newPrice);

/**
 * @brief Remove um item da lista de ovos
 * 
 * @param list Lista de ovos
 * @param identifier Identificador do ovo
 */
void ListRemoveItem(List *list, int identifier, int *f);

/**
 * @brief Imprime a lista de ovos mostrando o identificador e o preço
 * 
 * @param list Lista de ovos
 */
void ListPrint(List *list);

/**
 * @brief Calcula a média de preço dos ovos de páscoa que estao na lista
 * 
 * @param list Lista de ovos
 * @return float 
 */
float ListEggsAveragePrice(List *list);

/**
 * @brief Mostra os resultados, de acordo com a media de precos dos ovos
 * 
 * @param list Lista de ovos
 */
void ListEggsSearchPrice(List *list);

/**
 * @brief Desaloca toda a lista 
 * 
 * @param list Lista de ovos
 */
void ListDestroy(List **list);

#endif

/******************************************************************************************************************************/