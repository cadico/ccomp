/* Neste programa você vai trabalhar com a determinação de maiores caminhos
   em um DAG, com  matriz de adjacências.
1. Implemente os procedimentos Imprmc e OrdTop.
2. Rode o algoritmo para o digrafo do exercício em sala.*/
#include<iostream>
#include <string.h>
using namespace std;
const int NVM=1001;

// Declarações para o grafo
int n, m, mc, cpre, cpos, pre[NVM], ot[NVM], dm[NVM], E[NVM][NVM];

//Outras declarações
int i, j, u, w;

void Inicializa(int n){
    memset(pre, 0, sizeof(pre));
    memset(dm,  0, sizeof(dm));
	cpre = 0;  cpos = n;  mc = 0;
}

void Imprmc(int u){
    int w;     
/*  escreve u
    para w sucessores de u:
	    se (dm[w] == (dm[u]-1)): 
            Imprmc(w)
            parar loop 
*/
}
void OrdTop(int u, int v){
    int w;
/*   marcar v
     para w sucessores de   v:
            se  (w  não  marcado):  
		   		OrdTop(v,w)
            dm[v] = max (dm[v], dm[w]+1)
     ot[cpos--] = v;  mc = max (mc, dm[v]);
*/
}


int main(){
    while(true){    
        memset(E, 0, sizeof(E));
        cout<<endl<<"n m = ";  cin >>n>>m;
        Inicializa(n);
	    cout<<"Arestas:"<<endl;        
        for(i =1;i <= m;i++){
            cin>> u >> w; E[u][w] = 1;
        }
        for (i=1; i<=n; i++)
            if(pre[i] == 0)
                OrdTop(i,i);
        cout<<"Distancias maximas a um sumidouro: ";
        for (i=1; i<=n; i++) cout<<dm[i]<<" ";    cout<<endl; 
        cout<<"Caminho maximo a um sumidouro: ";   
        for (i=1; i<=n; i++) if (dm[i] == mc) Imprmc(i);  cout<<endl;  
    }
    return 0;
}
