// Este programa exercitar� as facilidades para formata��o de sa�das num�ricas usando 
// a biblioteca iomanip. Voc� possui uma tabela de dados num�ricos (matriz) que variam
// somente entre 0.0 e 100.0, e dever� format�-la de acordo com o que ser� pedido.
// 1. Rode o programa como ele est�.
// 2. Formate a sa�da para que todos os n�meros exibam duas casas decimais.
// 3. Pense no tamanho, em caracteres, do maior elemento poss�vel para essa tabela.
//	  Seja T esse tamanho, formate a sa�da para que todos os elementos ocupem T+1
//    caracteres.
// 4. Formate a sa�da para que, em linhas pares apenas, os espa�os adicionais gerados 
//    na etapa anterior sejam preenchidos pelo caracter '~'. (considere que a primeira
//	  linha � a linha 0). Em linhas �mpares, o preenchimento dever� ser um espa�o em branco.
// 5. Rode o programa, perceba que os valores est�o alinhados � direita. Alinhe-os
//	  � esquerda.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int linhas = 5, colunas = 5;
	double matriz[linhas][colunas] = {	{100.0, 2.6578, 50.3125, 24.10, 0.0},
										{29.1293123, 82.5093, 3.64957, 0.0, 71.48123},
										{11.219583, 45.678011, 0.0, 88.015, 1.95502},
										{7.865747, 0.0, 10.6949246123, 64.8676215, 100.0},
										{0.0, 97.6653, 52.09402, 6.364671, 36.58901}};

	char fill = ' ';

	for(int i=0; i<linhas; ++i) {
		for(int j=0; j<colunas; ++j) {
			if (i % 2 == 0)
			{
				cout << fixed << setprecision(2) << setw(7) << setfill('~') << left << matriz[i][j];
			}
			else
				cout << fixed << setprecision(2) << setw(7) << setfill(' ') << left << matriz[i][j];
		}
		cout << endl;
	}

    return 0;
}
