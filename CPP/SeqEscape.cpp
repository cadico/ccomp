#include <stdio.h>
#include <string.h>
char* lestring(void);
char* convertestring(char*);
int imprimestring(char*);
int main()
{
	char* string;
	string = lestring();
	convertestring(string);
	imprimestring(convertestring(string));
	return 0;
}

char* lestring()
{
	char string[256]="";
	fgets(string,255,stdin);
	return string;
}

char* convertestring(char* string)
{
	char auxstring[256] = "";
	int i;
	for (i=0; string[i] != '\n'; i++)
	{
		switch(string[i])
		{
			case ' ' : strcat(auxstring, "\\");
				break;
			case '\t' : strcat(auxstring, "\\" "t");
				break;
			case '\f' : strcat(auxstring, "\\" "f");
				break;
			case '\v' : strcat(auxstring, "\\" "v");
				break;
			case '\n' : strcat(auxstring, "\\" "n");
				break;
			case '\r' : strcat(auxstring, "\\" "r");
				break;
		}
	}
	return auxstring;
}

int imprimestring(char* string)
{
	printf("%s\n", string);
	return 0;
}
