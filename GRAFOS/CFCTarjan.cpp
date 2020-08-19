/*Neste programa você vai trabalhar com o algoritmo de Tarjan para
  encontrar os componentes fortemente conexos de um digrafo.
2. Implemente o procedimento CFC.
3. Desenhe o digrafo e cheque se os CFCs estão ok.*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<time.h>
using namespace std;
const int NVM=1001;

// Declarações para o grafo
int n, m, cpre, topo, pre[NVM], low[NVM], vis[NVM], E[NVM][NVM], Pil[NVM];

//Outras declarações
int i, j, u, w;

void Inicializa(int n){
    memset(E, 0, sizeof(E));
    memset(pre, 0, sizeof(pre));
    memset(low, 0, sizeof(low));
    memset(vis, 0, sizeof(vis));    
    memset(Pil, 0, sizeof(Pil));  
	cpre = 0;  topo = 0;
}
void CFC(int v){
    int w;
/*  pre[v] <- ++cpre;  low[v] <- cpre; vis[v] <- 1; PUSH(v);
    para vizinhos w de v:
	    se pre[w]=0:  
		    CFC(w)
        se vis[w]=1: 
		 	low[v] = min(low[v], low[w])
    se low[v] = pre[v]: 
        escrever('Novo componente:')
        enquanto (1):
	    	w <- POP();  Escrever w;  vis[w] = 0;
	    	se w = v:
				prar loop
*/    
}
void Tarjan(){
    int i;
    /*  para i <- 1..n incl.:
    	    se i não marcado:
    	        CFC(i)
    */
}

int main(){
    n = 8;  srand(time(NULL));
    while(true){    
        Inicializa(n);
	    m = 0;  cout<<"Arestas:"<<endl;
		while(m < 12){
		    u = rand()%8+1;  w= rand()%8+1;
		    if (E[u][w] == 0 && u != w){
		        E[u][w]=1; m++;  cout<<"("<<u<<","<<w<<") ";
		    }
		}
        Tarjan(); 
		cin.get();          
    }
    return 0;
}
