/*Neste programa voc� vai trabalhar com o algoritmo de Kruskal para
   determinar uma �rvore geradora m�nima de um grafo ponderado.
1. Programe o procedimento Kruskal.
2. Imprima a �rvore geradora de custo m�nimo.
*/
#include<iostream>
#include<algorithm>
using namespace std;
const int NVM=1001;
      int INF=1000000000;   
struct aresta {int u; int v; int p;};
// Declara��es para o grafo
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
   	para cada aresta (e) da ordena��o:
        UFFind(e.u);  UFFind(e.v);
        se  Pai[e.u] != Pai[e.v]:
	        UFUnion(e.u, e.v); nt++;  T[nt] = e;  ct = ct + e.p;
*/
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
        cout<<"AGM:"<<endl;
        cout<<"custo minimo: "<<ct<<endl;
	}
	return 0;
}


