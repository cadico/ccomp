#include <stdio.h>
#include <string.h>
char* OctToBin(char*);
char* StrResto(char*);
int BinToHex(char*);
int main()
{
	char string[30] = "";
	char* Binario;
	fgets(string, 30, stdin);
	Binario = OctToBin(string);
	Binario = StrResto(Binario);
	printf("%s",Binario);
	/*BinToHex(Binario);*/
	return 0;	
}


char* OctToBin(char* octal)
{
	int i=0;
	char Binario[90] = "";
	for (i=0; octal[i] != '\n'; i++)
	{
		switch(octal[i])
		{
			case '0': strcat(Binario, "000");
				break;
			case '1': strcat(Binario, "001");
				break;
			case '2': strcat(Binario, "010");
				break;
			case '3': strcat(Binario, "011");
				break;
			case '4': strcat(Binario, "100");
				break;
			case '5': strcat(Binario, "101");
				break;
			case '6': strcat(Binario, "110");
				break;
			case '7': strcat(Binario, "111");
				break;
		}
	}
	strcat(Binario, "\0");
	printf("%s\n", Binario);
	return Binario;
}


int BinToHex(char* Binario)
{
	int i=0,j=0;
	char hex[40] = "";
	for (i=0; Binario[j] != '\0'; i = i+4)
	{
		char auxbin[4] = "";
		for (j=0; j<=3; j++)
		{
			auxbin[j] = auxbin[i];
		}
		printf("%s", auxbin);
	}
	
}


char* StrResto(char* Binario)
{
	int tamanho;
	char auxbin[100] = "";
	tamanho = strlen(Binario)-1;
	if (tamanho % 4 != 0)
	{
		if (tamanho % 4 == 1)
		{
			strcat(auxbin,"000");
			strcat(auxbin,Binario);
		}
		else if (tamanho % 4 == 2)
		{
			strcat(auxbin, "00");
			strcat(auxbin,Binario);
		}
		else if (tamanho % 4 == 3)
		{
			strcat(auxbin,"0");
			strcat(auxbin,Binario);
		}
	}
	strcat(auxbin,"\0");
	return auxbin;
}
