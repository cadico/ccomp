#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"
#define MAXSIZE 257
void learq(char *);
int main(int argc, char *argv[])
{
	char linha[MAXSIZE];
	float auxvalue1, auxvalue2, auxvalue3, auxvalue4,auxvalue5;
	int i = 1;
	elemento *phead;
	for (i=1; i<argc; i++)
	{
		learq(argv[i]);
	}
	return 0;
}
void learq(char *nomearq)
{
	FILE *arq;
	elemento *phead = NULL;
	int verif;
	char linha[MAXSIZE];
	float auxvalue1, auxvalue2, auxvalue3, auxvalue4,auxvalue5;
	if ( (arq = fopen(nomearq, "r") ) == NULL)
	{
		printf("%s : Arquivo inexistente\n", nomearq);
	}
	else
	{
		while ( fgets(linha, 257, arq)	!= NULL)
			{
				if (sscanf(linha, "%f", &auxvalue1) == 1)
				{
					push(&phead,auxvalue1);	
				}
				else
				{
					if (linha[0] == '+')
					{
						auxvalue2 = pop(&phead); auxvalue3 = pop(&phead);
						auxvalue4 = auxvalue3 + auxvalue2; push(&phead,auxvalue4);
					}
					else if (linha[0] == '-')
					{
						auxvalue2 = pop(&phead); auxvalue3 = pop(&phead);
						auxvalue4 = auxvalue3 - auxvalue2; push(&phead,auxvalue4);
					}
					else if (linha[0] == '*')
					{	
						auxvalue2 = pop(&phead); auxvalue3 = pop(&phead);
						auxvalue4 = auxvalue3 * auxvalue2; push(&phead,auxvalue4);
					}
					else if (linha[0] == '/')
					{
						auxvalue2 = pop(&phead); auxvalue3 = pop(&phead);
						auxvalue4 = auxvalue3 / auxvalue2; push(&phead,auxvalue4);
					}
				}
			}
		auxvalue5 = pop(&phead);
		printf("%s = %.2f\n", nomearq, auxvalue5);
	}
}
