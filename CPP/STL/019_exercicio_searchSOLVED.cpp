// Você deve fazer um programa para resolver o seguinte problema,
// usando pesquisa binária:
//    É dado um vetor V de m=100 números positivos ordenados e quer-se saber
//    se existe um par de elementos no vetor cuja soma é um valor N dado.
//
//    Dica: Você pode verificar todos os números menores (ou iguais) a N,
//	  e para cada um utilizar a busca binária procurando o seu complemento,
//    isto é, para o número v[i] buscar N-v[i].
//
//    Obs: já foi colocada a geração do vetor V!

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> v;

int main()
{   int i, N, aux, j;
	bool a = false;
    for (i=1;i<=100;i++) v.push_back(rand()%300);
    sort(v.begin(), v.end());
    for (i=0;i<v.size();i++) cout << v[i] << " ";  cout << endl;
    
    //  Exercício a ser feito 

    cin >> N; // Valor da soma desejado
    vector<int>::iterator it = lower_bound(v.begin(), v.end(), N);
	aux = (it+1) - v.begin();
	for (j = 0; j <= aux; j++)
	{
		if ( binary_search(v.begin(), it, N-v[j]) )
		{
			a = true;
			break;
		} 
	}
	cout << (a ? "Existe" : "Nao existe") << endl;
    return 0;
}

