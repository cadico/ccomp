// Este programa realiza a adição de elementos na pilha
// depois retira esses elementos imprimindo-os.
// 1. Rode o programa como ele está.
// 2. Altere a criação da pilha, para que tenha o seguinte comportamento:
//      Se o elemento for par, é inserido normalmente (no topo).
//      Senão, ele deve entrar abaixo do elemento do topo.

#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
	int aux;
    stack<int> pilha;
    for (int i=2; i<=10; i+=2) pilha.push(i);
    for (int i=1; i<=10; i+=2)
    {
		aux = pilha.top();
		pilha.pop();
		pilha.push(i);
		pilha.push(aux);
	}
    cout << "Tirando os elementos...";
    
    while (!pilha.empty())
    {
        cout << " " << pilha.top();
        pilha.pop();
    }
    cout << endl;
    
    return 0;
}
