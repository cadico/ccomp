/*Neste programa voc� vai trabalhar com a determina��o de Pontos de Articula��o em um grafo 
   conexo representado em matriz d adjac�ncias.
1. Programe o procedimento Pontos e tamb�m a impress�o dos pontos de articula��o.
2. Rode o algoritmo para um grafo conexo de 8 v�rtices, contendo 3 pontes.
*/
#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
const int NVM=1001;

// Declara��es para o grafo
int n, m, E[NVM][NVM], cpre,  pre[NVM], low[NVM], pa[NVM];
//Outras declara��es
int i, j, u, w;

void Pontos(int u,int v){
	int w;
	/*
	pre[v] <- low[v] <- ++cpre;  pa[v] <- 0;
	para w <- 1 at� n incl.:
	    se E[v][w] == 1:
	        se  (pre[w] == 0): 
	        	Pontos(v, w)
	        	se pre[v] <= low[w]:
	             	pa[v]++
	        	low[v] <- min (low[v], low[w])
	        sen�o se (w != u):
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
				Pontos(i,i);
		/* Imprimir os pontos de articula��o
		
		*/
    }
	return 0;
}

 


