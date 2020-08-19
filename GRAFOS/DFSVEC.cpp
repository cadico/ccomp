/*Neste programa voc� vai trabalhar com a Busca em Profundidade e representa��o
   em listas de adjac�ncias com vector. O programa gera um grafo com para n e m informado.
1. Programe o procedimento DFS
2. Imprima o grafo ap�s sua gera��o
3. Determine o valor m�ximo de n para o qual o programa roda bem.
*/  
#include <stdio.h>
#include <string.h> 
#include<iostream>
#include<vector>
using namespace std;
const int NVM=10000000;

// Declara��es para o grafo
vector<int> A[NVM];
int n, m, cpre, pre[NVM]; 
//Outras declara��es
int i, j, k;

void Inicializa(int n){
    memset(pre, 0, sizeof(pre));
	cpre = 0;
	for (int i=0; i<=n; i++) A[i].clear();
}

void DFS(int u,int v){
    int j;
    /*
	pre[v] <- ++cpre
    para j <- 0 at� (A[v].size()-1) incl.: 
       se  pre[A[v][j]] = 0:
	       DFS(v, A[v][j])
    */
} 



int main(){
	while(true){
        cout<<"n m = ";   cin >> n>>m;
	    Inicializa(n);
	    cout<<"Inicializou"<<endl;	    
	    j=1; k=2;
	    for(i = 1; i<=m; i++){
			A[j].push_back(k);  A[k].push_back(j);
            k++;
            if (k > n){j++; k=j+1;} 
	    }
	    cout<<"Inicio da DFS"<<endl;		    
	    DFS(1,1);
	    cout<<"Fim da DFS"<<endl;
    }
	return 0;
}



