#include <stdlib.h>
#include "lista_enc.h"
#include "bool.h"

struct NO_{
    elem valor;
    NO* prox;
    NO* ant;
};

typedef struct LISTA_{
    NO* primeiro;
}LISTA;

/*==============================================================================
// criação
/*==============================================================================
*/

LISTA* lista_criar(){
    LISTA* l = malloc(sizeof(LISTA));
    l->primeiro=NULL;
}

void lista_descriar(){
    //
}

/*==============================================================================
// inserção
/*==============================================================================
*/

NO* no_novo(elem valor){
    NO* novo = malloc(sizeof(NO));
    novo->valor = valor;
    return novo;
}

bool lista_push(LISTA* l, elem e){
    //inserir apos ultimo item
    if(l!=NULL){
        NO* aux = l->primeiro;
        //2 possibilidades
        //vazia, inserir e linkar a raiz
        if(aux == NULL){
            NO* novo = no_novo(e);
            novo->prox = NULL;
            novo->ant = NULL;
            l->primeiro = novo;
        }
        //nao é vazia, ir até o ultimo
        else{
            while(aux->prox!=NULL){
                aux = aux->prox;
            }
            NO* novo = no_novo(e);
            novo->prox = NULL;
            novo->ant = aux;
            aux->prox = novo;
        }


    }else{
        return ERRO;
    }

}

/*==============================================================================
// remoção
/*==============================================================================
*/

elem lista_pop(LISTA* l){
    if(l!=NULL){
        NO* primeiro = l->primeiro;

        if(primeiro!=NULL){
            //tem ao menos 1 item
            NO* segundo =primeiro->prox;
            if(segundo == NULL){
                //tem apenas 1 item
                l->primeiro = NULL;
                elem resultado = primeiro->valor;
                free(primeiro);
                return resultado;
            }
            else{
                //tem ao menos 2 itens
                l->primeiro = segundo;
                segundo->ant = NULL;
                elem resultado = primeiro->valor;
                free(primeiro);
                return resultado;
            }
        }
        else{
            //lista vazia
            return ERRO;
        }
    }
    else{
        //lista nao existe
        return ERRO*2;
    }

}


/*==============================================================================
// etc
/*==============================================================================
*/

int lista_qtd(LISTA* l){
    if(l!=NULL){
        NO* aux = l->primeiro;
        int cont = 0;
        if(aux != NULL){
            while(aux!=NULL){
                aux = aux->prox;
                cont++;
            }
        }
        return cont;
    }
    else{
        return ERRO;
    }
};


/*==============================================================================
*/
