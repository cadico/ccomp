// Neste programa, vamos estudar atribui��es de ponteiros.
// 1. Rode o programa como ele est�. Observe que a vari�vel i est� sendo
//	inicializada e que as vari�veis pi e pppi cont�m lixo pois
//	n�o s�o declaradas como vari�veis globais e ppi � iniciado
//	com zero pois � declarada como vari�vel global.
// 2. Fa�a as seguintes atribui��es de modo que
//	pi deve apontar para o endere�o de i
//	ppi deve apontar para o endere�o de pi
//	pppi deve apontar para o endere�o de ppi
//

#include <iostream>
#include <string>
using namespace std;

int **ppi;

template <typename T>
void imprime(T i, string s){
	cout << "Endere�o de " << s << " = " << i << endl;
	cout << "Valor de " << s << " = " << *i << endl;
	cout << endl << endl;
}

int main() {
	int i;
	int *pi;
	int ***pppi;
	i = 27;
	pi = &i;
	ppi = &pi;
	pppi = &ppi;
	imprime<int*>(&i, "i");
	imprime<int**>(&pi, "pi");
	imprime<int***>(&ppi, "ppi");
	imprime<int****>(&pppi, "pppi");
	
	return 0;
}
