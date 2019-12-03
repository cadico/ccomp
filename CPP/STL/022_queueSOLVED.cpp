// Neste programa usaremos os m�todos b�sicos de filas.
// Suponha que temos um rob� empilhador e tr�s pilhas de caixas.
// O n�mero de caixas em cada uma � dado pelos inteiros a, b e c.
// O rob� recebe uma sequ�ncia de comandos e deve execut�-los na
// ordem. O lote de comandos � dado numa string, e cada caracter
// representa uma instru��o:
//   - O caracter 'A' faz o rob� retirar uma caixa de a e coloc�-la
//     em b.
//   - O caracter 'B' faz o rob� retirar uma caixa de b e coloc�-la
//     em c.
//   - O caracter 'C' faz o rob� retirar uma caixa de c e coloc�-la
//     em a.
// 
// Note que o n�mero de caixas jamais pode se tornar negativo.
// Acrescente loops para gerar a fila de instru��es a partir da
// string, e para processar as instru��es uma a uma. Use a fun��o
// imprime passando a �ltima instru��o executada para mostrar os
// valores a cada passo.
//
// e.g.: Se come�armos com a = 5, b = 2, c = 0,
//		 a sequ�ncia de instru��es BBBCAAACB deve resultar
//       em a = 4, b = 2, c = 1
#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

int a, b, c;

void imprime(char instrucao) {
	cout << "Instrucao " << instrucao << " executada" << endl;
	cout << "a = " << a << " | b = " << b << " | c = " << c << endl;
}

void caixas(int *a, int *b, int *c, string entrada)
{
	istringstream ss;
	char aux;
	ss.str(entrada);
	while ( ss >> aux )
	{
		if ( aux == 'A' )
		{
			if( (*a) == 0 )
			{
				imprime(aux);
				continue;
			}
			else
			{
				(*a)--;
				(*b)++;
				imprime(aux);
			}
		}
		else if ( aux == 'B' )
		{
			if( (*b) == 0 )
			{
				imprime(aux);
				continue;
			}
			else
			{
				(*b)--;
				(*c)++;
				imprime(aux);
			}
		}
		else if ( aux == 'C' )
		{
			if( (*c) == 0 )
			{
				imprime(aux);
				continue;
			}
			else
			{
				(*c)--;
				(*a)++;
				imprime(aux);
			}
		}
	}
	
}
int main()
{
    int i;
    string entrada;
    queue<char> instrucoes;
    cin >> entrada;

    a = 5; b = 2; c = 0; 

    //Acrescente c�digo aqui
	caixas(&a, &b, &c, entrada);
    return 0;
}
