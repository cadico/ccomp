// Faça um programa para testar os seguintes teoremas
// da Teoria dos conjuntos, considerando A, B, C conjuntos, 
// U = operação de União e I = operação de Interseção
// - = operação de diferença
//
// Teorema 1: A U (B I C) = (A I B) U (A I C)
// Teorema 2: A - (B U C) = (A - B) U (A - C)
// Teorema 3: A I (B U C) = (A U B) I (A U C)
//
// Rode o programa algumas vezes (A, B e C serão diferentes
// a cada vez) e verifique os resultados.
// Quais teoremas definitivamente não estão certos?
// Resposta:O teorema 1, produziu resultados diferentes em todos os testes.
//			O teorema 2, também produziu resultados diferentes nos 2 lados da "igualdade".
//			O teorema 3, idem.
#include <iostream>
#include <set>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

template <typename T>
void imprime(set<T> S, string nome = "") {
	typename set<T>::iterator it;
	if (nome.length()>0)
		cout << "Conjunto " << nome << ": ";
	for(it = S.begin(); it != S.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() 
{
	set<int> A, B, C, Teoremaaux, Teoremaaux2, Teorema, Teorema2, Teorema3;

	srand(time(NULL));

	int i;
	for(i=0;i<8;++i) {
		A.insert(1 + rand()%16);
		B.insert(1 + rand()%16);
		C.insert(1 + rand()%16);
	}
	
	imprime(A, "A");
	imprime(B, "B");
	imprime(C, "C");
	cout << endl;
	// Teorema 1: A U (B I C) = (A I B) U (A I C)
	set_intersection(B.begin(), B.end(), C.begin(), C.end(), inserter(Teoremaaux, Teoremaaux.begin())); imprime(Teoremaaux, "B I C");
	set_union(A.begin(), A.end(), Teoremaaux.begin(), Teoremaaux.end(), inserter(Teorema, Teorema.begin()));
	imprime(Teorema, "Teorema 1 Esquerda");
	Teoremaaux.clear(); Teorema.clear();
	set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(Teoremaaux, Teoremaaux.begin())); imprime(Teoremaaux, "A I B");
	set_intersection(A.begin(), A.end(), C.begin(), C.end(), inserter(Teoremaaux2, Teoremaaux2.begin())); imprime(Teoremaaux, "A I C");
	set_union(Teoremaaux.begin(), Teoremaaux.end(), Teoremaaux2.begin(), Teoremaaux2.end(), inserter(Teorema, Teorema.begin()));
	imprime(Teorema, "Teorema 1 Direita");
	Teoremaaux.clear(); Teorema.clear(); Teoremaaux2.clear(); cout << endl;
	
	//Teorema 2: A - (B U C) = (A - B) U (A - C)
	set_union(B.begin(), B.end(), C.begin(), C.end(), inserter(Teoremaaux, Teoremaaux.begin())); imprime(Teoremaaux, "B U C");
	set_difference(A.begin(), A.end(), Teoremaaux.begin(), Teoremaaux.end(), inserter(Teorema, Teorema.begin()));
	imprime(Teorema, "Teorema 2 Esquerda");
	Teoremaaux.clear(); Teorema.clear();
	set_difference(A.begin(), A.end(), B.begin(), B.end(), inserter(Teoremaaux, Teoremaaux.begin())); imprime(Teoremaaux, "A - B");
	set_difference(A.begin(), A.end(), C.begin(), C.end(), inserter(Teoremaaux2, Teoremaaux2.begin())); imprime(Teoremaaux2, "A - C");
	set_union(Teoremaaux.begin(), Teoremaaux.end(), Teoremaaux2.begin(), Teoremaaux2.end(), inserter(Teorema, Teorema.begin()));
	imprime(Teorema, "Teorema 2 Direita");
	Teoremaaux.clear(); Teorema.clear(); Teoremaaux2.clear(); cout << endl;
	
	//Teorema 3: A I (B U C) = (A U B) I (A U C)
	set_union(B.begin(), B.end(), C.begin(), C.end(), inserter(Teoremaaux, Teoremaaux.begin())); imprime(Teoremaaux, "B U C");
	set_intersection(A.begin(), A.end(), Teoremaaux.begin(), Teoremaaux.end(), inserter(Teorema, Teorema.begin()));
	imprime(Teorema, "Teorema 3 Esquerda");
	Teoremaaux.clear(); Teorema.clear();
	set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(Teoremaaux, Teoremaaux.begin())); imprime(Teoremaaux, "A U B");
	set_union(A.begin(), A.end(), C.begin(), C.end(), inserter(Teoremaaux2, Teoremaaux2.begin())); imprime(Teoremaaux2, "A U C");
	set_intersection(Teoremaaux.begin(), Teoremaaux.end(), Teoremaaux2.begin(), Teoremaaux2.end(), inserter(Teorema, Teorema.begin()));
	imprime(Teorema, "Teorema 3 Direita");
	Teoremaaux.clear(); Teorema.clear(); Teoremaaux2.clear(); cout << endl;
	return 0;
}
