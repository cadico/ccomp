/*Neste programa você vai trabalhar com o algoritmo de Floyd
   para determinar o circuito de carteiro chines de um grafo.
   Você pode considerar que existirão sempre 4 vértices de
   grau ímpar.
1. Faça o algoritmo para determinar o custo mínimo do circuito de 
   carteiro chinês. */
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include <iomanip>
using namespace std;
const int NVM=1001;
      int INF=1000000000;

// Declarações para o grafo
int n, m, E[NVM][NVM], D[NVM][NVM], GRAU[NVM];

void Inicializa(int n){
    memset(E, 0, sizeof(E));
    memset(D, 0, sizeof(D));  
    memset(GRAU, 0, sizeof(GRAU));  	  
}

void Floyd(){
    int i, j, k;
    for (i=1; i<=n; i++)  
		for (j=1; j<=n; j++){
	    	if (E[i][j]==0 && i !=j)
	        	D[i][j] = INF;
	    	else
	        	D[i][j] = E[i][j];
		}
	for (k=1; k<=n; k++) 
		for (i=1; i<=n; i++) 
			for (j=1; j<=n; j++)
	    		if (D[i][j] > D[i][k]+D[k][j])
		 			D[i][j] = D[i][k]+D[k][j];          
}

int Carteirochines( ){
   int tc;

}

int main(){
    int i, j, k, c, a, b, u, v, p;
    cout << setw(4);
    a = 3;  b= 4;    
	while (true){
        //gera grid de dimensões a x b 
        n =a*b;  cout<<"Grid de dimensoes "<<a<<"x"<<b<<endl;
	    Inicializa(n);        
        for(i=1;i<=a;i++) for (j=1; j<b; j++){
            k = (i-1)*b+j;
            c = rand()%10+1;  E[k][k+1]=E[k+1][k]=c;  GRAU[k]++;  GRAU[k+1]++;
            cout<<k<<" "<<k+1<<" "<<c<<endl;
        }
        for(i=2;i<=a;i++) for (j=1; j<=b; j++){
            k = (i-1)*b+j;
            c = rand()%10+1;  E[k][k-b]=E[k-b][k]=c; GRAU[k]++; GRAU[k-b]++;
            cout<<k<<" "<<k-b<<" "<<c<<endl;
        }
        c = rand()%10+1;  E[2][11]=E[11][2]=c; GRAU[2]++; GRAU[11]++;
	    Floyd();
	    for(i=1; i<=n; i++){
            for(j=1; j<=n; j++) { cout << setw(4);  cout<<D[i][j];}  cout<<endl;
        }
	    cout<<"Custo minimo do circuito de carteiro chines: "<<Carteirochines()<<endl;
        cin.get();
	}
	return 0;
}


