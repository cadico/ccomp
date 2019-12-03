#include<stdio.h>
/*Neste programa voc� vai trabalhar com a Busca Irrestrita em Profundidade em um grafo
   representado com matriz de adjac�ncias.  O objetivo � listar todos os caminhos distintos
   entre dois v�rtices.
1. Fa�a as altera��es necess�rias para imprimir os caminhos:
	a) empilhamento/desempilhamento de v�rtices;
	b) detec��o e impress�o de um caminho (usando a pilha)
3. Rode o programa para um grafo com 6 v�rtices e 11 arestas.*/
#include<iostream>
#include<string.h>
using namespace std;
int i, n, m, u, v, cpre, E[1001][1001], pre[1001], topo, pil[1001];

void Inicializa(){
    memset(pre, 0, sizeof(pre));
    memset(E, 0, sizeof(E));
    topo=0;
}

void BIP(int v, int u){
    int w, i;
	cpre++; pre[v] = cpre;  
	for(w = 1;w <= n;w++)
		if((E[w][v] == 1) && (pre[w] == 0))
			BIP(w, u);
	pre[v] = 0;  
}

int main(){
	while(true){
        cout<<"n m = ";   cin >> n>>m;
	    Inicializa();
	    cout<<"Arestas:"<<endl;	    
	    for(i=1; i<=m; i++){
		    cin >> u >> v;
            E[u][v] = E[v][u] = 1;
	    }
		while (true){
	    	cout<<"par de v�rtices dos caminhos a serem listados: ";  cin>>v>>u;
			if (!u) break;
			cout<<endl<<"caminhos entre "<<v<<" e "<<u<<":"<<endl; 
	    	BIP(v, u);
		}
    }
	return 0;
}
