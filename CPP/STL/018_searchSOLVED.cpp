//Neste programa vamos estudar a busca binária e as funções binary_search, lower_bound e upper_bound.
// 1. Rode o programa como está
// 2. Complete o código para imprimir "encontrado" ou "nao encontrado"
//    com base nos retornos da função binary_search no vetor v, procurando os números 21 e 20.
//    Não se esqueça de ordenar o vetor antes, para que a pesquisa binária funcione.
// 3. Imprima em seguida o índice no qual foi encontrada a primeira ocorrência do número 20,
//    usando uma das funções *_bound para calculá-lo.
// 4. O vetor w está sendo criado com registros de alunos com nome e idade. Complete a função
//	  de comparação comp para que os registros possam ser ordenados primeiramente por idade,
//	  e usando o nome como desempate. Use o sort para ordenar.
// 5. Acrescente código para imprimir todos os alunos do vetor w que possuam determinada idade.
//	  Utilize as funções *_bound com a classe de comparação customizada "comp_idade" para buscar
//	  a idade armazenada em consultaIdade.

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> v;

/* NÃO ALTERE ESTE TRECHO DO PROGRAMA */
//Estrutura Aluno
struct Aluno {
	string nome;
	int idade;

	Aluno(string n, int i): nome(n), idade(i) {}
	Aluno(int i): idade(i) {}
};

//Impressão customizada para Aluno
ostream& operator<<(ostream& s, const Aluno& a)
{
    return s << a.nome << "(" << a.idade << ")";
}

//Função de comparação para a ordenação de um vetor de Aluno
bool comp(const Aluno & a, const Aluno & b) { 
	if (a.idade == b.idade) return a.nome < b.nome;
	return a.idade < b.idade; 
}

//Classe de comparação para busca de alunos por idade
struct comp_idade {
	bool operator() (const Aluno & a, const int & b) { 
		return a.idade < b; 
	}
	bool operator() (const int & a, const Aluno & b) { 
		return a < b.idade; 
	}
};

vector<Aluno> w;

/* ----------------------------------- */

int main()
{
	bool a ,b;
    // Inclusão dos valores 10, 10, 12, 15, 20, 20, 20, 25, 50
    v.push_back(50);  v.push_back(12);  v.push_back(10);  v.push_back(20);
    v.push_back(25);  v.push_back(20);  v.push_back(15);  v.push_back(20);
    v.push_back(10);
    sort(v.begin(), v.end(), comp);
    a = binary_search(v.begin(), v.end(), 21);
    b = binary_search(v.begin(), v.end(), 20);
    int n = lower_bound(v.begin(), v.end(), 20) - v.begin();
    cout << endl;
    cout << "binary_search(21): " << (a ? "Encontrado" : "Não encontrado") << endl << endl;
    cout << "binary_search(20): " << (b ? "Encontrado" : "Não encontrado") << endl << endl;
    cout << "Indice de 20: "<< n << endl << endl;

    w.push_back(Aluno("Erica", 25)); w.push_back(Aluno("Alex", 25)); w.push_back(Aluno("Bruno", 20));
    w.push_back(Aluno("Alice", 20)); w.push_back(Aluno("Bernardo", 22)); w.push_back(Aluno("Caio", 25));
    w.push_back(Aluno("Daniel", 19)); w.push_back(Aluno("Carol", 21)); w.push_back(Aluno("Eduardo", 26));
    w.push_back(Aluno("Bob", 50));

    
	//Descomente esse código para resolver a questão 4
	sort(w.begin(), w.end(), comp);
    for(int i=0;i<w.size();++i)
    	cout << w[i] << " ";
    cout << endl;
    

    int consultaIdade = 25;

    
    vector<Aluno>::iterator aux = lower_bound(w.begin(), w.end(), consultaIdade, comp_idade());
    vector<Aluno>::iterator aux2 = upper_bound(w.begin(), w.end(), consultaIdade, comp_idade());
	//Acrescente código para a questão 5 aqui
	cout << endl;
    for (; aux!=aux2; aux++)
    {
		cout << *aux << endl;
	} 

    return 0;
}
