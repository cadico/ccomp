// Altere o programa abaixo para que, usando APENAS chamadas do método resize, seja
// gerado a partir do vetor v, um vetor decrescente com 9 elementos, que inicie com
// elemento 9 e termine com o elemento 1. Imprima o vetor em seguida usando iterator.

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int i,j=9;
    vector<int> v;
    for (i=1; i<=9; i++)
    {
		v.resize(i,j);
		j--;
	}
	vector<int>::iterator it = v.begin();
	while (it != v.end())
		cout << *(it++) << " ";
    return 0;
}
