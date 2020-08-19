/*Neste programa você vai trabalhar com o algoritmo de Dijkstra
   para digrafos, usando a representação de matriz de adjacências,
   e nostrando caminhos mínimos entre dados vértices.
1. Implemente o algoritmo de Dijkstra e o de listar um caminho mínimo.
2. Confira (na mão) o caminho mínimo para um grafo escolhido.
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
const int NVM=1001;
      int INF=1000000000;

// Declarações para o grafo
int n, m, pre[NVM], E[NVM][NVM], Di[NVM];

void Inicializa(int n){
    memset(E, 0, sizeof(E));
    memset(pre, 0, sizeof(pre));    
    for (int i=1; i<=n+1; i++) Di[i]=INF; 
}

void Dijkstra(int v){
	int i, j, w, z;
/* 	Di[v] <-  0  
	para i <- 1..n incl.:
		w <- n+1
		para j <- n..1 incl.:
			se j não marcado e Di[j] < Di[w]:
				w <- j
        marcar w
		para z <- 1..n incl.:
			se E[w,z]> 0 e z não marcado: 
				Di[z] <-  min( Di[z], Di[w] + E[w,z])
*/
}

void CaminhoMinimo(int v,int t, int d){
    int i;
/*  se Di[t] > 0:
        para i <- 1..n incl.:
            se  E[i,t] > 0 e  Di[i]+E[i,t] = d:
                CaminhoMinimo(v, i, Di[i])
                parar loop
    escrever (t)
*/
}

int main(){
    int i, j, a, b, c, k,v,t;  
	while (true){
        cout<<endl<<"Dimensoes do grid: a b = ";  cin>>a>>b;
        n =a*b;  cout<<"Grid de dimensoes "<<a<<"x"<<b<<endl;
	    Inicializa(n);        
        for(i=1;i<=a;i++) for (j=1; j<b; j++){
            k = (i-1)*b+j;
            c = rand()%10+1;  E[k][k+1]=E[k+1][k]=c; 
            cout<<k<<" "<<k+1<<" "<<c<<endl;
        }
        for(i=2;i<=a;i++) for (j=1; j<=b; j++){
            k = (i-1)*b+j;
            c = rand()%10+1;  E[k][k-b]=E[k-b][k]=c; 
            cout<<k<<" "<<k-b<<" "<<c<<endl;
        }
	    cout<<"Vertice inicial: "; cin>>v;
	    Dijkstra(v);
	    cout<<"Distancias minimas: ";
	    for(i=1; i<=n; i++) cout<<Di[i]<<" ";  cout<<endl;
	    cin.get();
	    while(true){
            cout<<endl<<"Caminho minimo para: t = " ; cin>>t;
	        if (!t) break;
            CaminhoMinimo(v,t,Di[t]);
        }	    
	}
	return 0;
}


