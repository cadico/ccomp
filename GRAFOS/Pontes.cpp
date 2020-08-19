/*Neste programa você vai trabalhar com a determinação de Pontes em um grafo representado
   em matriz d adjacências.
1. Programe o procedimento Pontes.
2. Rode o algoritmo para um grafo conexo de 8 vértices, contendo 3 pontes.
*/
#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
const int NVM=1001;

// Declarações para o grafo
int n, m, E[NVM][NVM], cpre,  pre[NVM], low[NVM];
//Outras declarações
int i, j, u, w;

void Pontes(int u,int v){
	int w;
	/*
	pre[v] <- low[v] <- ++cpre;
	para w <- 1 até n incl.:
	    se E[v][w] == 1:
	        se  pre[w] == 0: 
	        	Pontes(v, w)
	        	se pre[w]== low[w]:
	             	escrever (v,' ',w, ' eh ponte')
	        	low[v] <- min (low[v], low[w])
	        senão se (w != u):
	        	low[v] <- min(low[v], pre[w])
	*/
} 

void Inicializa(){
    memset(E, 0, sizeof(E));
    memset(pre, 0, sizeof(pre));
    memset(low, 0, sizeof(low));
	cpre = 0; 
}

int main(){
	while(true){
        cout<<"n m = ";   cin >> n>>m;
	    Inicializa();
	    cout<<"Arestas:"<<endl;	    
	    for(i=1; i<=m; i++){
		    cin >> u >> w;
		    E[u][w] = E[w][u] = 1;
	    }
	    for(i = 1;i <= n; i++)
		    if(pre[i] == 0) 
				Pontes(i,i);
    }
	return 0;
}

 


