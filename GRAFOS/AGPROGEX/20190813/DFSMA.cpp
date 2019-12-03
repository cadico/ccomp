/*Neste programa você vai trabalhar com a Busca em Profundidade em um grafo representado
   em matriz d adjacências.
1. Programe o procedimento BP.
2. Acrescente instruções para imprimir a ordem de entrada e saída de cada vértice na busca.
3. Rode o algoritmo para um grafo conexo de 6 vértices.
4. Rode também o programa para um grafo desconexo e veja o resultado. 
   Corrija o erro e rode novamente.
*/
#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
const int NVM=1001;

// Declarações para o grafo
int n, m, E[NVM][NVM], cpre,  pre[NVM], cpos, pos[NVM];
//Outras declarações
int i, j, u, w;

void BP(int u,int v){
	int w;
    /*
	pre[v] <- ++cpre
	para w <- 1 até n incl:
		se w vizinho de v e w não marcado: 
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

 


