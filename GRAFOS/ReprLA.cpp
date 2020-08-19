/*Neste programa você vai trabalhar com a representação de um grafo em listas
   de adjacências.
1. Observe a declaração do grafo: variáveis n, m, lista A, vetor de graus D.
2. Observe a criação aleatória do grafo.
3. Acrescente instruções para imprimir as listas de adjacências.
4. Descubra até para qual maior valor de n+m você consegue rodar o programa*/
#include<iostream>
#include<stdlib.h>
using namespace std;
const int NVM=200000001;

// Declarações para o grafo
typedef struct no* lista;
struct no{ int v; lista prox;};
int n, m;   lista A[NVM];
//Outras declarações
int i, j, u, w;  lista p;

void Inicializa(int n){
    for (int i=1; i<=n; i++) A[i] = NULL;
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
			p = new(no);   p->v = w;   p->prox = A[u];   A[u] = p;
			p = new(no);   p->v = u;   p->prox = A[w];   A[w] = p;
	    }
	    cout<<"Listas de Adjacências"<<endl;  cin.get();
	    for(i = 1; i<=n; i++){
			cout<<i<<": "<<endl;  

	    }
	}
	return 0;
}


