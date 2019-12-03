// Neste programa são apresentados alguns métodos de
// tratamento de listas, sobretudo a diferença entre o insert e o assign.
// 1. Crie uma lista com todos os números de 1 a 16 fazendo um insert com a lista auxiliar (aux) e com o número 16.
// 2. Imprima a lista, usando o iterator, e mudando para exibir do fim para o começo.
// 3. Use o método insert para colocar cinco elementos "17" na lista e imprima o resultado.
// 4. Use o método assign para colocar cinco elementos "17" na lista e imprima o resultado.
// 5. Troque os elementos da lista com a lista auxiliar e veja o resultado.
// 6. Inverta a lista e a imprima lendo-a apenas uma vez.
//

#include <list>
#include <iostream>
using namespace std;

int main() 
{
	int i;
	list<int> l1,aux;
    
    list<int>::iterator it1 = l1.begin();
    for(i=1;i<16;++i)
		aux.push_back(i);
	
    //Insira código aqui!
    aux.insert(aux.end(),16);
    list<int>::reverse_iterator it2 = aux.rbegin();
    while (it2 != aux.rend())
    {
    	cout << *it2++ << " ";
	}
	cout << endl;
	aux.insert(aux.end(), 5, 17);
	list<int>::iterator it3 = aux.begin();
	while (it3 != aux.end())
    {
    	cout << *it3++ << " ";
	}
	cout << endl;
	aux.assign(5, 17);
	l1.swap(aux);
	l1.reverse();
	it3 = l1.begin();
	while (it3 != l1.end())
    {
    	cout << *it3++ << " ";
	}
    //

	return 0;
}
