// Neste programa, vamos estudar a manipula��o de ponteiros e o uso de templates.
// 1. Rode o programa como ele est�.
// 2. Altere as fun��es swapPointers() e swapValues() para que a primeira
//    troque os ponteiros de 'a' e 'b' e a segunda altera os valores a
//    que apontam os ponteiros 'a' e 'b' sem que sejam alterados os ponteiros.
//    N�o altere nada al�m das fun��es referidas.
// 3. Descomente o c�digo de main(). Agora temos outras duas vari�veis
//    'c' e 'd', mas do tipo double. Altere as fun��es swapPointers(), 
//    swapValues() e imprime() para que possam receber valores do tipo int
//    ou double. Ser� necess�rio alterar a chamada das fun��es em main().
//

#include <iostream>
#include <stdlib.h>
using namespace std;
template <typename R>
void imprime(R *p1, R *p2, char c1, char c2){
	cout << "Valor de "<< c1 << " = " << *p1 << endl;
	cout << "Endere�o de "<< c1 << " = " << p1 << endl;
	cout << "Valor de "<< c2 << " = " << *p2 << endl;
	cout << "Endere�o de "<< c2 << " = " << p2 << endl;
	cout << c1 << " + " << c2 << " = " << (*p1)+(*p2) << endl;
	cout << endl << endl;
}
template <typename T>
void swapPointers(T **a, T **b){
	T *aux = *a;
	*a = *b; *b = aux;
}
template <typename P>
void swapValues(P *a, P *b){
	P aux = *a;
	*a = *b; *b = aux;
}

int main() {
	int *a, *b;
	double *c, *d;
	
	a = (int*) malloc(sizeof(int));
	b = (int*) malloc(sizeof(int));
	*a = 13;
	*b = 27;
	
	cout << "Depois das as atribui��es de a e b:" << endl;
	imprime(a, b, 'a', 'b');
	
	swapPointers<int>(&a, &b);
	
	cout << "Depois da fun��o swapPointers(a, b):" << endl;
	imprime<int>(a, b, 'a', 'b');
	
	swapValues<int>(a, b);
	
	cout << "Depois da fun��o swapValues(a, b):" << endl;
	imprime<int>(a, b, 'a', 'b');
	
	
	//Descomente esta parte para resolver a quest�o 3
	
	c = (double*) malloc(sizeof(double));
	d = (double*) malloc(sizeof(double));
	*c = 2.5;
	*d = 3.7;
	
	cout << "Depois das as atribui��es de c e d:" << endl;
	imprime<double>(c, d, 'c', 'd');
	
	swapPointers<double>(&c, &d);
	
	cout << "Depois da fun��o swapPointers(c, d):" << endl;
	imprime<double>(c, d, 'c', 'd');
	
	swapValues<double>(c, d);
	
	cout << "Depois da fun��o swapValues(c, d):" << endl;
	imprime<double>(c, d, 'c', 'd');

	return 0;
}
