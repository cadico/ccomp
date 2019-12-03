#ifndef _PILHA_H
#define _PILHA_H
typedef struct elemento
{
	float valor;
	struct elemento* proximo;
}elemento;
float pop(struct elemento **);
void push(struct elemento **, float);
struct elemento * criaelem(float);
#endif
