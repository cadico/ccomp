// Neste programa voc� vai fazer um exerc�cio com lista de prioridade.
// O algoritmo b�sico para m�todo Huffman de compacta��o de dados
// consiste em criar uma lista de prioridades para as frequ�ncias 
// dos n s�mbolos e depois fazer n-1 passos onde, a cada passo, s�o
// retirados os dois menores elementos da lista e � adicionada sua soma.
// Fa�a o programa para essa ideia e imprima o topo da lista a cada
// opera��o.

#include <queue>
#include <iostream>

using namespace std;

int main()
{
	//Altere a priority_queue abaixo para que elementos
	//menores tenham mais prioridade
	
	priority_queue<int, vector <int>, greater<int> > pq; 
    for (int i=1; i<=20; i++)
    {  pq.push(i); cout << i << " ";
    }
    cout << endl;

    return 0;
}
