// Neste programa voc� utilizar� um dos m�todos de remo��o de listas para
// gerar listas de n�meros primos. Lembrando, n�meros primos s� s�o divis�veis
// por eles mesmos e pelo n�mero 1.
// 1. Rode o programa como est�.
// 2. Acrescente c�digo para remover o n�mero 1 da lista.
// 3. Acrescente um �nico loop para remover os m�ltiplos de cada n�mero presente
//    na lista, come�ando pelo 2.
//      Dica: Use a classe Compara. Voc� pode parametriz�-la se criar um
//			  construtor para ela que receba alguma vari�vel.

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
