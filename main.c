#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "bool.h"
#include "lista_enc.h"

int main(){

    LISTA* l = lista_criar();

    lista_push(l, 33);
    printf("adicionado item na lista\n");

    lista_push(l, 66);
    printf("adicionado item na lista\n");

    printf("qtd itens: %d\n",lista_qtd(l));



    printf("item %d removido da lista\n",lista_pop(l));
    printf("item %d removido da lista\n",lista_pop(l));


    printf("qtd itens: %d\n",lista_qtd(l));

    return 0;
}
