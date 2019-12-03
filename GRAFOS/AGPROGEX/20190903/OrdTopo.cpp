/*Neste programa você vai trabalhar com a ordenação topológica em um digrafo, 
   representado com  matriz de adjacências.
1. Implemente o algoritmo de Ordenação Topológica
2. Rode o algoritmo para o digrafo do exercício em sala.*/
#include<iostream>
#include <string.h>
using namespace std;
const int NVM=1001;

// Declarações para o grafo
int n, m, cpre, cpos, pre[NVM], ot[NVM], E[NVM][NVM];

//Outras declarações
int i, j, u, w;

void Inicializa(int n){
    memset(E, 0, sizeof(E));
    memset(pre, 0, sizeof(pre));
    memset(ot, 0, sizeof(ot));    
	cpre = 0;  cpos = n;
}
void OrdTop(int u, int v){
   int w;
    /*  marcar v
        para w sucessor de v
            se (w nao marcado):  
			    OrdTop(v,w)
        ot[cpos--] <- v             
    */
}

int main(){
    while(true){    
        cout<<endl<<"n m = ";  cin >>n>>m;
        Inicializa(n);
	    cout<<"Arestas:"<<endl;        
        for(i =1;i <= m;i++){
            cin>> u >> w; E[u][w] = 1;
        }
        for (i=1; i<=n; i++)
            if(pre[i] == 0)
                OrdTop(i,i);
        cout<<"Ordenacao Topologica: ";
        for (i=1; i<=n; i++) cout<<ot[i]<<" ";        
    }
    return 0;
}
