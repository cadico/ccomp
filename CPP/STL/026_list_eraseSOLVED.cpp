// Neste voc� vai fazer a seguinte aplica��o:
//  Dada uma lista ordenada de inteiros qualquer, elimine os elementos cuja posi��o
//  seja igual a um dos valores da lista.
//  Depois rode seu programa para a lista l criada (1 3 5 7 8)
//  Devem restar apenas (3,7).

#include <list>
#include <iostream>
using namespace std;
int main()
{
    list<int> l;  
    l.push_back(1); l.push_back(3); l.push_back(5); l.push_back(7); l.push_back(8);
    list<int>::iterator it = l.begin();
  	for( ; it != l.end(); it++ ) cout << *it << " ";
   	cout << endl;
	int i = 0, a;
	it = l.begin();
	for (i = 0; i < l.size(); i++)
	{
		a = *it;
		if( ((i + 1) == a) );
		{
			it = l.erase(it);
		}
		it++;
	}
	it = l.begin();
	for( ; it != l.end(); it++ ) cout << *it << " ";
    return 0;
}
