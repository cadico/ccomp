/*Neste programa você vai trabalhar com o algoritmo de Kruskal para
   determinar uma árvore geradora mínima de um grafo ponderado.
   Além disso vai determinar quais arestas têm que estar presentes 
   em todas AGM.
1. Programe o procedimento Kruskal e ArestasNec.
2. Imprima as arestas necessárias. Usar o grafo:
6 9
1 2 2
1 3 1
1 6 2
2 4 2
2 5 2
4 3 2
3 5 2
4 5 4
5 6 4
*/
#include<iostream>
#include<algorithm>
using namespace std;
const int NVM=1001;
      int INF=1000000000;   
struct aresta {int u; int v; int p;};
// Declarações para o grafo
int n, m, nt, ct, Pai[NVM];  
aresta E[NVM], T[NVM];

int compara(aresta e, aresta f){
    return e.p < f.p;
}
int UFFind(int p){
    if (Pai[p] != p)  Pai[p] = UFFind(Pai[p]);
    return Pai[p];
}
void UFUnion(int p, int q){
    if (Pai[p] > Pai[q]) Pai[Pai[p]] = Pai[q];
    else Pai[Pai[q]] = Pai[p];
}

void Kruskal(){
   int i;
/*    
    sort(E+1, E+m+1, compara);   nt=0;  ct = 0;
    para i <- 1..n incl. : 
        Pai[i] <- i  
   	para cada aresta (e) da ordenação:
        UFFind(e.u);  UFFind(e.v);
        se  Pai[e.u] != Pai[e.v]:
	        UFUnion(e.u, e.v); nt++;  T[nt] = e;  ct = ct + e.p;
*/
}
void ArestasNec(){


}

int main(){
    int u, v, p;
	while (true){
	    cout<<endl<<"Grafo com n m = ";  cin >>n>>m;
	    if (!n) break;
	    cout<<"Arestas e pesos:"<<endl;
	    for(int i=1; i<=m; i++){
		    cin >>E[i].u>>E[i].v>>E[i].p;
	    }
	    Kruskal();
        cout<<"Arestas necessárias:"<<endl;

	}
	return 0;
}


