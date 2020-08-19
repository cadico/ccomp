/*Neste programa você vai trabalhar com a modificação da Busca em Profundidade em um grafo 
   representado em matriz d adjacências, pra encontrar um emparelhamento maximal.
1. Imprima o emprelhamento gerado.
2. Rode seu programa para um grafo com 8 vértices e 12 arestas.
*/
#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
const int NVM=1001;

// Declarações para o grafo
int n, m, E[NVM][NVM], cpre,  pre[NVM], M[NVM];
//Outras declarações
int i, j, u, w;

void BP(int u,int v){
	int w;
	pre[v] = ++cpre;
	for (w=1; w<=n; w++) if (E[v][w] == 1){
		if (pre[w] == 0) 
			BP(v,w);
	}
} 

void Inicializa(){
    memset(E, 0, sizeof(E));
    memset(pre, 0, sizeof(pre));
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
			    BP(1,1);
		for (i=1; i<=n; i++) cout<<pre[i]<<" ";  cout<<endl;
    }
	return 0;
}

 


