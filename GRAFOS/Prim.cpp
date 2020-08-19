/*Neste programa você vai trabalhar com o algoritmo de Prim para
   determinar uma árvore geradora mínima de um grafo ponderado.
1. Programe o procedimento Prim.
2. Imprima a árvore geradora e o custo mínimo.
3. Verifique que o resultado é igual quando se inicia com vértice diferente de 1.
*/
#include<iostream>
#include<string.h>
using namespace std;
const int NVM=1001;
      int INF=1000000000;   
struct aresta {int u; int v; int p;};
// Declarações para o grafo
int n, m, nt, ct, pre[NVM], E[NVM][NVM], C[NVM], MV[NVM];  
aresta T[NVM];

void Inicializa(int n){
    memset(E, 0, sizeof(E));
    ct = 0;
}

void Prim(int v){
   int i, j, w, z, mp;
/* 	para i <-1..n+1 incl.:
		C[i] <-  INF
		pre[i] <- 0
		nt <- 0;   mp <- INF;
	pre[v] <- 1
	para z <- 1..n incl.:
		se E[v][z] != 0:
			C[z] <- E[v][z]
			MV[z] <- v  
	para i..n-1 incl.:
		w <- n+1
		para j <-n..1 incl.:
			se !pre[j] e  C[j] < C[w]:
				w <- j              
		pre[w] <- 1
		T[++nt].u <- w;  T[nt].v <- MV[w];   ct <- ct+E[w][MV[w]];
		para z <-1..n:
			se  E[w][z] != 0  e  !pre[z]  e  C[z] > E[w][z]:
				C[z] <- E[w][z]
				MV[z] <- w
*/
}

int main(){
    int u, v, p, t;
	while (true){
	    cout<<endl<<"Grafo com n m = ";  cin >>n>>m;
	    if (!n) break;
	    Inicializa(n);
	    cout<<"Arestas e pesos:"<<endl;
	    for(int i=1; i<=m; i++){
		    cin >>u>>v>>p;
		    E[u][v]= p;  E[v][u] = p;
	    }
	    Prim(1);
        cout<<"AGM:"<<endl;
        cout<<"custo minimo: "<<ct<<endl;
	}
	return 0;
}


