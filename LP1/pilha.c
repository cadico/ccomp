#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
float pop(elemento **q)
{
	float retorno;
	elemento *qaux;
	qaux = (*q);
	retorno = qaux->valor;
	(*q) = qaux->proximo;
	qaux->proximo = NULL;
	free(qaux);
	return retorno;
}
void push(elemento ** p, float x)
{	
	elemento * paux = criaelem(x);
	paux->proximo = (*p);
	*p = paux;
}
elemento *criaelem(float value)
{
	elemento * e = (elemento *) malloc(sizeof(elemento));
	e->valor = value;
	e->proximo = NULL;
	return e;
}

