// Este programa demonstra como funciona o m�todo erase
// 1. Rode o programa como ele est�.
// 2. Acrescente o c�digo para apagar do vector v apenas os n�meros �mpares
//	  usando o erase. Tome cuidado para n�o pular elementos durante a
//	  itera��o, pois sempre que voc� apagar um elemento do vector, o
//    elemento seguinte toma sua posi��o.
// 3. Depois, acrescente o c�digo para apagar do vector w quaisquer
//	  elementos que estejam entre pares de n�meros consecutivos.
//	  Certifique-se de usar a forma do erase que apaga intervalos,
//	  ao inv�s de um elemento por vez.
//	  Exemplo: O vetor w sugerido dever� se tornar:
//				1 2 2 6 7 8 8 10

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int i, aux;
    int a[] = {20, 11, 15, 10, 9, 40, 13, 34, 43, 99, 100, 1};
    vector<int> v(a, a+12);
    
    //Acrescente c�digo aqui!
	vector<int>::iterator it = v.begin();
	while ( it != v.end() )
	{
		if ( (*it) % 2 != 0 )
			v.erase(it);
		else
		{
			it++;
		}
		
	}
    ////////////////////////
    
    for(i = 0;i<v.size();i++) cout << v[i] << " "; cout << endl;

    //----------------------------------------
    	
    int b[] = {1, 2, 3, 4, 5, 2, 6, 7, 8, 9, 8, 10};
    vector<int> w(b, b+12);
    
    //Acrescente c�digo aqui!
	vector<int>::iterator it2 = w.begin();
	while ( it2 != w.end() )
	{
		aux = *it2;
		vector<int>::iterator it3 = find(it2+1, w.end(), aux);
		if ( it3 != w.end() )
		{
			w.erase(it2+1, it3);
		}
		it2++;
	}
    ////////////////////////
    
    for(i = 0;i<w.size();i++) cout << w[i] << " "; cout << endl;
    
    return 0;
}
