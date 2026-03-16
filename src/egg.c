#include "../include/egg.h"
#include <stdio.h>
#include <stdlib.h>

/***************************************************** PRIVATE INTERFACE ******************************************************/

struct _egg{
    int _identifier;
    float _price;
    struct _egg *_next;
};

/***************************************************** PUBLIC INTERFACE *******************************************************/

Egg *EggCreate(int identifier, float price){
    Egg *eggsAlloc = (Egg*)malloc(sizeof(Egg));

    if(!eggsAlloc){
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    EggSetIidentifier(eggsAlloc, identifier);
    EggSetPrice(eggsAlloc, price);
    EggSetNext(eggsAlloc, NULL);
    
    return eggsAlloc;
}

int EggGetIidentifier(Egg *egg){return egg->_identifier;}
float EggGetPrice(Egg *egg){return egg->_price;}
Egg *EggGetNext(Egg *egg){return egg->_next;}

void EggSetIidentifier(Egg *egg, int identifier){
    if(identifier >= 0)
        egg->_identifier = identifier;
}

void EggSetPrice(Egg *egg, float price){
    if(price > 0.0)    
        egg->_price = price;
}

void EggSetNext(Egg *egg, Egg *next){
    egg->_next = next;
}

/******************************************************************************************************************************/