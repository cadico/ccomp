// Neste programa apresentamos o método splice para tratamento de listas.
// 1. Use uma chamada do método splice para transferir o último elemento de L2
//	  para a segunda posição de L1, e imprima as listas em seguida.
// 2. Use uma chamada do método splice para transferir toda a lista L3, em ordem
//    inversa, para o começo da lista l2, e imprima as listas em seguida.
// 3. Use uma chamada do método splice para rotacionar a lista L2 três posições
//    para a direita. Isto é, o último elemento passa a ser o terceiro, o penúltimo
//    passa a ser o segundo, e o antepenúltimo passa a ser o primeiro. Imprima as
//    listas após isso.
// 4. Use uma chamada do método splice para transferir toda a lista L2 para o final
//    da lista L1, e imprima as listas uma última vez.

#include <list>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

list<int> l1, l2, l3;

void imprime() { 
	list<int>::iterator it;
	it = l1.begin(); cout << "Lista 1: "; 
	for( ; it != l1.end(); ++it) { cout << *it << " "; }  
	cout << endl; 
	it = l2.begin(); cout << "Lista 2: "; 
	for( ; it != l2.end(); ++it) { cout << *it << " "; }  
	cout << endl; 
	it = l3.begin(); cout << "Lista 3: "; 
	for( ; it != l3.end(); ++it) { cout << *it << " "; }  
	cout << endl; 
}

int main()
{
	list<int>::iterator it;
	list<int>::reverse_iterator it2;
	l1.push_back(10); l1.push_back(30); l1.push_back(40); l1.push_back(50);
	l2.push_back(55); l2.push_back(45); l2.push_back(20);
	l3.push_back(15); l3.push_back(25); l3.push_back(35);
	imprime();
	cout << endl;
	/*Acrescente chamadas 'splice' e 'imprime' aqui*/
	//1.
	it = l1.begin();	it++;
	l1.splice(it, l2, --l2.end());
	imprime();
	cout << endl;
	//2.
	l3.reverse();
	l2.splice(l2.begin(), l3, l3.begin(), l3.end());
	imprime();
	cout << endl; 
	//3.
	it = l2.end();
	it--; it--; it--;
	l2.splice(l2.begin(), l2, it, l2.end());
	imprime();
	cout << endl; 
	//4.
	it = l1.end();
	l1.splice(it, l2);
	imprime();
	
    return 0;
}
