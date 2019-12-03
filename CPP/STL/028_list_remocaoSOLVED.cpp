// Neste programa você utilizará um dos métodos de remoção de listas para
// gerar listas de números primos. Lembrando, números primos só são divisíveis
// por eles mesmos e pelo número 1.
// 1. Rode o programa como está.
// 2. Acrescente código para remover o número 1 da lista.
// 3. Acrescente um único loop para remover os múltiplos de cada número presente
//    na lista, começando pelo 2.
//      Dica: Use a classe Compara. Você pode parametrizá-la se criar um
//			  construtor para ela que receba alguma variável.

#include <iostream>
#include <list>
using namespace std;

list<int> L;

struct Compara {
    int valor;
    Compara(int num){
        this->valor = num;
    }
    public : bool operator()(int& a)
    {
        if (a%2 == 0)
        {
        	if (a == 2)
        		return false;
        	else
        		return true;
        }
        else if ( (a%valor) == 0)
        {
        	if (a == valor)
        		return false;
        	else 
				return true;
		}
        else
        	return false;
    }
};

void imprime() { 
	list<int>::iterator it = L.begin(); cout << "Lista: "; 
	for( ; it != L.end(); ++it) { cout << *it << " "; }  
	cout << endl; 
}

int main()
{   
	int j;
	for(int i=1; i<=100;++i) L.push_back(i);
	L.remove(1);
	list<int>::iterator it;
	imprime();
	for(j=2; j<=100; j++)
	{
		L.remove_if(Compara(j));
	}
	imprime();
    return 0;
}
