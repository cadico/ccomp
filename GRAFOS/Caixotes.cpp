/* Neste programa você vai trabalhar com o problema de descobrir a maior pilha de
	caixotes que pode ser formada. A solução é criar um DAG com as relações entre os
	caixotes e determinar o caminho máximo no DAG.
1. Observe que você só fornece o núm. de caixotes. Eles são criados aleatoriamente.
1. Implemente os procedimentos Imprmc, OrdTop e CriaDAG.
2. Rode o algoritmo n= 10 e faça um esboço em papel do resultado.*/
#include<iostream>
#include<stdlib.h>
#include <string.h>
using namespace std;
const int NVM=1001;
struct ca{int l; int a;};

// Declarações para o grafo
int n, m, mc, cpre, cpos, pre[NVM], ot[NVM], dm[NVM], E[NVM][NVM];
ca C[NVM];

//Outras declarações
int i, j, k, u, w;

void Inicializa(int n){
    memset(pre, 0, sizeof(pre));
    memset(dm,  0, sizeof(dm));
	cpre = 0;  cpos = n;  mc = 0;
}

void Imprmc(int u){
    int w;     
/*  escreve u
    para w sucessores de u:
		se dm[w] == (dm[u]-1): 
            Imprmc(w)
            parar loop 
*/
}

void OrdTop(int u, int v){
    int w;
/*  marcar v
    para w sucessores de   v:
        se  w  não  marcado:  
			OrdTop(v,w)
        dm[v] <- max (dm[v], dm[w]+1)
    ot[cpos--] <- v
	mc <- max (mc, dm[v])
*/
}
void CriaDAG(){
    int i, j;
/*   para i <- 1..n-1 incl.:
		para  j <- i+1..n incl.:
		    se ( ((C[i].l <= C[j].l) && (C[i].a <= C[j].a)) ||  ((C[i].a <= C[j].l) && (C[i].l <= C[j].a)) ):
			    E[i,j] <- 1
			senão se  ( ((C[i].l >= C[j].l) && (C[i].a >= C[j].a)) || ((C[i].a >= C[j].l) && (C[i].l >= C[j].a)) ):
			    E[j,i] <- 1
*/
}

int main(){
    while(true){    
        memset(E, 0, sizeof(E));
        cout<<endl<<"num. de caixotes n = ";  cin >>n;
        Inicializa(n);
        i=1;
        while(i<=n){
            C[i].l= rand()%(2*n-1)+1;  C[i].a = C[i].l+rand()%(2*n-C[i].l);
            k=0; for(j=1; j<i; j++) if (C[i].l==C[j].l) k=1;
            if (k==0) i++;
        }
        cout<<"Caixotes: ";  for (i=1; i<=n; i++)  cout<<i<<"("<<C[i].l<<"/"<<C[i].a<<") "; cout<<endl;
        CriaDAG();
        for (i=1; i<=n; i++)
            if(pre[i] == 0)
                OrdTop(i,i);
        cout<<"Distancias maximas: ";
        for (i=1; i<=n; i++) cout<<dm[i]<<" ";    cout<<endl; 
        cout<<"Tam. max da pilha: "<<mc+1<<" Pilha: "<<endl; 
        for (i=1; i<=n; i++) if (dm[i] == mc) Imprmc(i);  cout<<endl;          
    }
    return 0;
}
