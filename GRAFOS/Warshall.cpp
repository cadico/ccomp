/*Neste programa você vai trabalhar com o algoritmo de Warshall
   para fechamento transitivo em digrafos, usando a representação de matriz 
   de adjacências.  
1. Implemente o algoritmo de Warshall.
2. Implemente o algoritmo estudado no curso passado para obtenção dos CFC
	a partir do fechamento transitivo. 
3. Rode com n = 7, desenhe u digrafo gerado, que tenha 4 componentes
   e confira o resultado*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
const int NVM=1001;

// Declarações para o digrafo
int n, m, E[NVM][NVM], F[NVM][NVM], M[NVM];

void Warshall(){
	int i, j, k;
/*
	F <- E
	para i <- 1..n incl.:
		F[i,i] <- 1
	para k <- 1..n incl:
		para i <- 1..n incl.:
			se F[i,k]==1:
				para j <-1..n incl:
					se F[k,j]==1:
						F[i.j]<- 1
		Imprimir ("matriz F para k = ",k)
		Imprimir F
*/                     
}

void CFCFT(){
    int i, j, w;
/*  para i<- 1..n incl:
		se i não marcado:
			escrever ("Novo Componente: ", i)
			marcar i
			para j <- 1..n:
				se F[i,j]=1 e F[j,i]=1:
					escrever (j)  
					marcar j
        	escrever (fim de linha)
*/
}

void  CriaDigrafo(){
    int i, j, k, u, v;
    k = m;
	while(k--){
        u=v=0;
        while (u==v || E[u][v]==1){
		    u = rand()%n+1;  v = rand()%n+1;
        }
        E[u][v]=1;
    }
    cout<<"Digrafo:"<<endl;
	for (i=1; i<=n; i++){
        cout<<i<<":";   for (j=1; j<=n; j++) if (E[i][j]==1) cout<< " "<<j;  cout<<endl;
    }
} 
void Inicializa(){
    memset(E, 0, sizeof(E));      memset(F, 0, sizeof(F));      memset(M, 0, sizeof(M));
    CriaDigrafo();
}

int main(){
	while (true){
        cout<<"n = "; cin>>n;
        m = rand()%(n*(n-1)/4)+1;
        Inicializa();
	    Warshall();
		CFCFT();
		cin.get();        
	}
	return 0;
}


