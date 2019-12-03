/*Neste programa voc� vai trabalhar com o algoritmo de Prim para
   determinar uma �rvore geradora m�nima de um grafo ponderado.
1. Voc� deve modificar o programa que usa a representa��o em MA
   para a representa��o em Vector e deve, tamb�m usar uma lista de 
   prioridade para encontrar, a cada passo, a melhor aresta a ser 
   acrescentada � AGM.
2. Imprima a �rvore geradora e o custo m�nimo.
*/
#include<iostream>
#include<string.h>
#include<queue>
#include<vector>
using namespace std;
const int NVM=1001;
      int INF=1000000000; 
typedef pair<int, int> pii;  
struct aresta {int u; int v;  int p;};
// Declara��es para o grafo
int n, m, nt, ct, pre[NVM]; 
vector<aresta> A[NVM]; 
aresta T[NVM];

void Inicializa(int n){
    memset(pre, 0, sizeof(pre));
	for (int i=0; i<=n; i++) A[i].clear();
	ct=0;
}

void Prim(int v){
   int i, j, w, z, mp;
/* 	para i <-1..n+1 incl.:
		C[i] <-  INF
		pre[i] <- 0
		nt <- 0;   mp <- INF;
	pre[v] <- 1
	para z vizinho de v:
		C[z] <- E[v][z]
	para i..n-1 incl.:
		w <- v�rtice n�o marcado de custo m�nimo           
		pre[w] <- 1
		T[++nt].v <- w;  ct <- ct+E[w][MV[w]];
		para z vizinho de w n�o marcado:
			se C[z] > E[w][z]:
				C[z] <- E[w][z]
*/
}

int main(){
    int u, v, p, t;  aresta ar;
	while (true){
	    cout<<endl<<"Grafo com n m = ";  cin >>n>>m;
	    if (!n) break;
	    Inicializa(n);
	    cout<<"Arestas e pesos:"<<endl;
	    for(int i=1; i<=m; i++){
		    cin >>u>>v>>p;   
			ar.u = u;  ar.v = v;  ar.p = p; 
			A[u].push_back(ar);  
			ar.u = v;  ar.v = u;  ar.p = p; 
			A[v].push_back(ar);
	    }
	    Prim(1);
        cout<<"AGM:"<<endl;
        cout<<"custo minimo: "<<ct<<endl;
	}
	return 0;
}


