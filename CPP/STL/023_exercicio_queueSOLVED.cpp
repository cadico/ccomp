// Neste programa você vai fazer um exercício usando Filas.
// Trata-se da geração da sequência simples: sequência de inteiros
// positivos, cujos únicos fatores primos são 2 ou 3. A sequência 
// começa com 2 3 4 6 8 9 12 16 18 24 ... O termo 499 é 391378894848.
// O algoritmo para gerar essa sequência é assim: usam-se duas filas
// Q1 e Q2. Q1 começa com 2 e Q2 com 3. A seguir começa um processo
// para gerar os elementos em ordem que consiste em:
//   a) remover e imprimir o menor elemento (digamos X) entre os da frente das duas filas.
//   b) Inserir na Fila Q2 o número 3X.
//   c) Caso X tenha vindo de Q1, inserir também em Q1 o elemento 2X.
// O processo para quando tiver gerado todos os elementos desejados.
// Rode seu programa para gerar os elementos de 1 a 500.
#include <iostream>
#include <queue>
using namespace std;

int main()
{   int i;  long long int x, aux;
    queue<long long int> f1, f2;
    f1.push(2); f2.push(3);
    for (i=1; i<=500; i++)
    {
    	if (f1.front() <= f2.front())
		{
			aux = f1.front();
			f1.pop();
			cout << aux << endl;
			f1.push(2*aux);
			f2.push(3*aux);
		}
		else
		{
			aux = f2.front();
			f2.pop();
			cout << aux << endl;
			f2.push(3*aux);
		}
	}
    return 0;
}
