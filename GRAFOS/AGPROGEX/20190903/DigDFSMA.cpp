/*Neste programa você vai trabalhar com a Busca em Profundidade (DFS)
   em um digrafo representado em matriz d adjacências.
1. Implemente a busca e invente um digrafo tal que sejam listados todos os
   tipos de arestas. */
#include<iostream>
#include <string.h>
using namespace std;
const int NVM=1001;

// Declarações para o grafo
int n, m, cpre, cpos, E[NVM][NVM],  pre[NVM], pos[NVM];
//Outras declarações
int i, j, u, w;

void BP(int u,int v){
	int w;
/*	se (u != v) 
		escrever ("aresta de arvore: ", u , v)
	pre[v] <- ++cpre
	para w <- 1 até n incl.:
		se (E[v][w] == 1):
            se (pre[w] == 0):
				BP(v,w)
            senão se (pos[w] == 0):
				escrever ("aresta de retorno: ", v , w)
            senão se (pre[v] < pre[w]) 
				escrever ("aresta de avanco: ", v , w)    
            senão 
				escrever ("aresta de cruzamento: ", v , w)
    pos[v] <- ++cpos; 
*/    
} 

void Inicializa(){
    memset(E, 0, sizeof(E));
    memset(pre, 0, sizeof(pre));
    memset(pos, 0, sizeof(pos));    
	cpre = 0;  cpos = 0;
}

int main(){
	while(true){
        cout<<"n m = ";   cin >> n>>m;
	    Inicializa();
	    cout<<"Arestas:"<<endl;	    
	    for(i=1; i<=m; i++){
		    cin >> u >> w;
		    E[u][w] = 1;
	    }
	    for(i = 1;i <= n;i++)
		    if(pre[i] == 0)
			    BP(i,i);
    }
	return 0;
}

 


