// Neste programa demonstramos diferentes construtores do set.
// 1. Rode o programa como está.
// 2. Imprima cada um dos sets criados indicando no console qual set
//    está sendo impresso. (Melhor usar template) pois 
//    (set<int> != set<int,classcomp>)
// 3. Adicione elementos em s1, s5 e s6 com a função insert(elemento) 
//    para não ficarem vazios.
// 4. O que fica armazenado no pair correspondente ao retorno do insert?
//  Resposta: No first temos o elemento que foi inserido, ou não, e no second temos a verificação (em caso de falha na inserção, esta célula terá valor 0,
//			  caso contrário, terá valor 1, especificando que o elemento foi inserido com sucesso).
#include <iostream>
#include <set>
using namespace std;
template <typename T>
void imprime(T s , int n)
{
	typename T::iterator it = s.begin();
	cout << "s" << n << " = { ";
	for( ; it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << "}" << endl;
}
bool fncomp (int lhs, int rhs) {return lhs<rhs;}
struct classcomp {
	bool operator() (const int& lhs, const int& rhs) const
		{return lhs>rhs;}
};


int main() 
{
	pair<set<int>::iterator, bool> verif;
	
	set<int> s1;
	verif = s1.insert(10);
	imprime(s1, 1);
	cout << "Resultado pair: " << *verif.first << " " << verif.second << endl << endl;
	
	int mi[]= {10,20,30,40,50};
	set<int> s2 (mi,mi+5); 
	imprime(s2, 2);
	
	set<int> s3 (s2);
	imprime(s3, 3);
	
	set<int> s4 (s2.begin(), s2.end()); 
	imprime(s4, 4);
	
	set<int,classcomp> s5;
	verif = s5.insert(20);
	imprime(s5, 5);
	cout << "Resultado pair: " << *verif.first << " " << verif.second << endl << endl;
	
	set<int,bool(*)(int,int)> s6 (fncomp);
	verif = s6.insert(30);
	imprime(s6, 6);
	cout << "Resultado pair: " << *verif.first << " " << verif.second << endl << endl;
	verif = s6.insert(30);
	imprime(s6, 6);
	cout << "Resultado pair: " << *verif.first << " " << verif.second << endl << endl;
	return 0;
}
