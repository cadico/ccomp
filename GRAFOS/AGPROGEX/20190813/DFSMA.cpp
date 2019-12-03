/*Neste programa voc� vai trabalhar com a Busca em Profundidade em um grafo representado
   em matriz d adjac�ncias.
1. Programe o procedimento BP.
2. Acrescente instru��es para imprimir a ordem de entrada e sa�da de cada v�rtice na busca.
3. Rode o algoritmo para um grafo conexo de 6 v�rtices.
4. Rode tamb�m o programa para um grafo desconexo e veja o resultado. 
   Corrija o erro e rode novamente.
*/
#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
const int NVM=1001;

// Declara��es para o grafo
int n, m, E[NVM][NVM], cpre,  pre[NVM], cpos, pos[NVM];
//Outras declara��es
int i, j, u, w;

void BP(int u,int v){
	int w;
    /*
	pre[v] <- ++cpre
	para w <- 1 at� n incl:
		se w vizinho de v e w n�o marcado: 
			BP(v,w)
	pos[v] <- ++cpos;
	*/
} 

void Inicializa(){
    memset(E, 0, sizeof(E));
    memset(pre, 0, sizeof(pre));
	cpre = 0;  cpos=0;
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
    }
	return 0;
}

 


