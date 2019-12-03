// Neste programa apresentamos o método Merge para tratamento de listas.
// 1. Rode o programa como está.
// 2. Faça o Merge das listas sem usar o comando Merge.
#include <list>
#include <iostream>
using namespace std;

void imprime(list<char> l, string nome) {  
list<char>::iterator it = l.begin();  cout << nome << " Lista: ";
		for( ; it != l.end(); ++it) { cout << *it << " "; }  
		cout << endl; 
}

int main()
{
	list<char> l1, l2, aux;
	for(int i = 0 ; i < 15 ; ++i) 
	{ if(i%3==0)  l1.push_back(i+65); 
      if (i%2==0) l2.push_back(i+65); }
	imprime(l1, "1ª"); 
	imprime(l2, "2ª");
	list<char>::iterator it = l1.begin();
	list<char>::iterator it2 = l2.begin();
	while ( (it != l1.end()) || (it2 != l2.end()) )
	{
		if (it == l1.end())
		{
			aux.splice(aux.end(), l2);
			break;
		}
		else if (it2 == l2.end())
		{
			aux.splice(aux.end(), l1);
			break;
		}
		else if ( (*it) <= (*it2) )
		{
			aux.push_back(*it);
			it = l1.erase(it);
		}
		else if ( (*it2) < (*it) )
		{
			aux.push_back(*it2);
			it2 = l2.erase(it2);
		}
	}
	imprime(l1, "1ª");
	imprime(l2, "2ª");
	imprime(aux, "Merged");

    return 0;
}
