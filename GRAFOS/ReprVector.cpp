/*Neste programa você vai trabalhar com a representação de um grafo em listas
   de adjacências.
1. Observe a declaração do grafo: variáveis n, m, vector A, vetor de graus D.
2. Observe a criação aleatória do grafo.
3. Acrescente instruções para imprimir as listas de adjacências.
4. Descubra até para qual maior valor de n+m você consegue rodar o programa*/
#include <stdio.h>
#include <string.h> 
#include<stdlib.h>
#include<vector>
#include<iostream>
using namespace std;
const int NVM=10000000;

// Declarações para o grafo
vector<int> A[NVM];
int n, m;
//Outras declarações
int i, j, u, w;

void Inicializa(int n){
    for (int i=1; i<=n; i++) A[i].clear();
}

int main(){
    while(true){
   	    cout<<endl<<"n, m = ";  cin >> n >> m;
	    Inicializa(n);
	    //cout<<"Arestas:"<<endl;
	    for(i = 1; i<=m; i++){
			u = 0;  w=0;
			while (u == w){
			    u = (rand()%n*rand()%n)%n+1;   w = (rand()%n*rand()%n)%n+1; 
				//cout<<u<<" "<<w<<" ";  cin.get();
			}
			A[u].push_back(w);  A[w].push_back(u);
	    }
	    cout<<"Vizinhança:"<<endl;  cin.get();
	    for(i = 1; i<=n; i++){
			cout<<i<<": "<<endl; 
			/*para j de 0 a (A[i].size()-1): 
       				Escrever (A[i][j]);
			  Escrever fim de linha; 
       		*/

	    }
	}
	return 0;
}
