#include "../include/list.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/***************************************************** PRIVATE INTERFACE ******************************************************/

struct _list{
    size_t _size;
    Egg *_begin;
};

bool ListIsEmpty(List *list){return ListGetSize(list) == 0;}

void ListIncrementSize(List *list){list->_size++;}
void ListDecrementSize(List *list){list->_size--;}

/***************************************************** PUBLIC INTERFACE *******************************************************/

List *ListCreate(){
    List *listAlloc = (List*)malloc(sizeof(List));
    if(!listAlloc){
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    ListSetSize(listAlloc, 0);
    ListSetBegin(listAlloc, NULL);
    return listAlloc;
}

size_t ListGetSize(List *list){return list->_size;}
Egg *ListGetBegin(List *list){return list->_begin;}

void ListSetSize(List *list, size_t size){
    if(size >= 0)
        list->_size = size;
}

void ListSetBegin(List *list, Egg *begin){
    list->_begin = begin;
}

Egg *ListSearchItem(List *list, int identifier, int *f){
    Egg *aux = ListGetBegin(list);
    while(aux != NULL){
        if(EggGetIidentifier(aux) == identifier){
            (*f) = 1;
            return aux;
        }
        EggSetNext(aux, EggGetNext(aux));
    }
    return NULL;
}

void ListAdd(List *list, int identifier, float price){
    Egg *eggAlloc = EggCreate(identifier, price);
    EggSetNext(eggAlloc, ListGetBegin(list));
    ListSetBegin(list, eggAlloc);
    ListIncrementSize(list);
}

void ListUpdateItemIdentifier(Egg *egg, int newIdentifier){
    EggSetIidentifier(egg, newIdentifier);
}

void ListUpdateItemPrice(Egg *egg, float newPrice){
    EggSetPrice(egg, newPrice);
}

void ListUpdateItem(Egg *egg, int newIdentifier, int newPrice){
    EggSetIidentifier(egg, newIdentifier);
    EggSetPrice(egg, newPrice);
}

void ListRemoveItem(List *list, int identifier, int *f){
    Egg *previous = NULL;
    Egg *actual = ListGetBegin(list);

    while(actual != NULL && EggGetIidentifier(actual) != identifier){
        previous = actual;
        actual = EggGetNext(actual);
    }

    if(!actual){
        (*f) = 0;
        return;
    }

    if(previous == NULL)
        ListSetBegin(list, EggGetNext(actual));
    
    else
        EggSetNext(previous, EggGetNext(actual));

    (*f) = 1;

    ListDecrementSize(list);
    free(actual);
}

void ListDestroy(List **list){
    Egg *previous = NULL, *actual = ListGetBegin(*list);
    while(actual != NULL){
        previous = actual, actual = EggGetNext(actual);
        free(previous);
    }
    free(*list);
    *list = NULL;
}

void ListPrint(List *list){
    int count = 1;
    Egg *aux = ListGetBegin(list);
    while(aux != NULL){
        printf("+ ITEM %d - IDENTIFICADOR: %d | PREÇO: %.2f\n", count, EggGetIidentifier(aux), EggGetPrice(aux));
        printf("+--------------------------------------------------------------------------+\n");
        aux = EggGetNext(aux);
        count++;
    }
}

float ListEggsAveragePrice(List *list){
    float sumEggPrices = 0.0;
    Egg *aux = ListGetBegin(list);
    while(aux != NULL){
        sumEggPrices += EggGetPrice(aux);
        aux = EggGetNext(aux);
    }
    return (sumEggPrices / ListGetSize(list));
}

void ListEggsSearchPrice(List *list){
    float priceHedging = ListEggsAveragePrice(list);
    Egg *aux = ListGetBegin(list);
    while(aux != NULL){
        if(EggGetPrice(aux) < (priceHedging / 2))
            printf("+ OVO DE PÁSCOA %d: TALVEZ DÊ PARA COMPRAR\n", EggGetIidentifier(aux));
        else if(EggGetPrice(aux) <= priceHedging)
            printf("+ OVO DE PÁSCOA %d: ACHO QUE É MELHOR COMPRAR O VALOR EM BARRA DE CHOCOLATE\n", EggGetIidentifier(aux));
        else
            printf("+ OVO DE PÁSCOA %d: MELHOR COMPRAR UMA BARRA DE OURO COM ESSE DINEHIRO\n", EggGetIidentifier(aux));
        printf("+--------------------------------------------------------------------------+\n");
        aux = EggGetNext(aux);
    }
}

/******************************************************************************************************************************/