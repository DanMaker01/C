#include "bool.h"

//definir elemento como:
#define elem int
typedef struct NO_ NO;
typedef struct LISTA_ LISTA;

//===================================
//criacao
LISTA* lista_criar();
void lista_descriar();


//===================================
//insercao
bool lista_push(LISTA* l, elem e);

//===================================
//remo��o
elem lista_pop(LISTA* l);


//===================================
int lista_qtd(LISTA* l);
//===================================