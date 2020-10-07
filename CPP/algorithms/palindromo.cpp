#include <stdio.h>
#include <string.h>
#ifndef MAX
#define MAX 255
#endif
int tamanho, chave = 1;

int main(){
	char * palavra; int i=1;
	fgets(palavra,MAX,stdin);
	printf("%s\n", palavra);
	tamanho = strlen(palavra);
	while (tamanho>=1)
	{
		if (palavra[tamanho] -'0' == palavra[i] - '0')
		{
			tamanho--; i++;
		}
		else
		{
			chave = 0;
			break;
		}
	}
	chave ? printf("SIM\n") : printf("NAO\n");
	return 0;
}

