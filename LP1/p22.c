#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 256
void transposta(FILE* file, char *);
int main()
{
	FILE *arq;
	char inputname[MAXSIZE], outputname[MAXSIZE], tipo[3];
	scanf("%s %s", inputname, outputname);
	if ( (arq = fopen(inputname, "r")) == NULL)
	{
		printf("Não foi possível abrir o arquivo de entrada\n");
	}
	else
	{
		transposta(arq, outputname); 
		fclose(arq);
	}
	return 0;
}
void transposta(FILE* file, char *filename)
{
	FILE* outputfile;
	char type[3];
	int lin,col,i,j, maxpixel, *linha = NULL, **auxlin = NULL, *percorrecoluna = NULL , **aux = NULL;  
	fscanf(file, "%s", type);
	fscanf(file, "%d %d", &col, &lin);
	fscanf(file, "%d", &maxpixel);
	auxlin = (int **) malloc((lin*sizeof(int *)));
	for (i=0; i<lin; i++)
	{	 
		linha = (int *) malloc((col*sizeof(int)));
		*(auxlin+i) = linha;
		for (j=0; j<col; j++)
		{	
			fscanf(file, "%d", linha+j);
		}
	}
	outputfile = fopen(filename, "w+");
	fprintf(outputfile, "%s\n", type);
	fprintf(outputfile, "%d %d\n", lin, col);
	fprintf(outputfile, "%d\n", maxpixel);
	aux = auxlin;
	for (i=0; i<col; i++)
	{	
		percorrecoluna = *aux;
		for (j=0; j<lin-1; j++)
		{	
			percorrecoluna = *(aux+j);
			fprintf(outputfile,"%d ", *(percorrecoluna+i));
		}
		percorrecoluna = *(aux+j);
		fprintf(outputfile, "%d\n", *(percorrecoluna+i));
	}
	//free(linha); free(auxlin); free(percorrecoluna);
	fclose(outputfile);
}

