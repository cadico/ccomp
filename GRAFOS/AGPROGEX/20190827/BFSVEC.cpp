/*Neste programa você vai trabalhar com a Busca em Largura (BFS) em um grafo 
   simples, usando a representação de listas de adjacências com vector.
1. Rode o programa para um grafo com 10 vértices
2. Modifique o programa para determinar o vetor de distâncias mínimas. */
#include <stdio.h>
#include <string.h> 
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int NVM=1001;
struct no{int v;  int d;};

// Declarações para o grafo
vector<int> A[NVM];
int n, m, cpre, pre[NVM], D[NVM]; 

//Outras declarações
int i, j, u, w, f, r;
queue<no>  Q;

void Inicializa(int n){
	cpre = 0;
	for (int i=0; i<=n; i++) A[i].clear();
}

void BFS(int v){
	no x;  int u, d, t;
    memset(pre, 0, sizeof(pre));	
	pre[v] = ++cpre;  
	while (!Q.empty()) Q.pop();  
	x.v=v; x.d = 0;  Q.push(x);
	while(! Q.empty()){
		x = Q.front();  t = x.v;  d = x.d;
		for(int j=0; j<A[t].size(); j++){
		    w = A[t][j];
			if( pre[w] == 0){
				x.v = w;  x.d = d+1;  Q.push(x); pre[w] = ++cpre;
			}
		}
		Q.pop();
	}
}


int main(){
	while(true){
        cout<<"n m = ";   cin >> n>>m;
	    Inicializa(n);
	    cout<<"Arestas:"<<endl;	    
	    for(i=1; i<=m; i++){
		    cin >> u >> w;
            A[u].push_back(w);  A[w].push_back(u);
	    }
		while (true){
	    	cout<<"vertice do inicio da busca, 0 para terminar: ";  cin>>u;
			if (!u) break;
	    	BFS(u);
	    	cout<<"Distancias para "<<u<<": ";
		}
    }
	return 0;
}



