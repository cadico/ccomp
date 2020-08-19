/*Neste programa você vai trabalhar com o método do caminho crítico para 
   uma rede de atividades, representada através de um digrafo com  matriz de adjacências.
1. Implemente os algoritmos OrdTop, PreencheTMC, PReencheTMT, PreencheFolga
2. Rode o algoritmo e escolha um digrafo gerado, desenhe o grafo com o resultado e mostre que 
   o caminho crítico foi calculado corretamente.
3. Opcionalmente, determine o caminho crítico computacionalmente.   
*/
#include<iostream>
#include<stdlib.h>
#include <string.h>
#include<time.h>
using namespace std;
const int NVM=1001;
const int INF=1000000000;

// Declarações para o grafo
int n, m, cpre, cpos, pre[NVM], ot[NVM], E[NVM][NVM], TMC[NVM], TMT[NVM], F[NVM], C[NVM];

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
            se w nao marcado:  
			    OrdTop(v,w)
        ot[cpos--] <- v            
    */
}
void PreencheTMC(){
   int i, z, v;
    /*  para i <- 1..n incl.: 
		    v <- ot[i]
			TMC[v]] <- 1
            para z <- 1..n incl.:
				se v é vizinho de z:
					TMC[v] <- max(TMC[v], TMC[z]+C[z])
    */
}
void PreencheTMT(){
   int i, z, v;
    /*  para i <- n..1 incl.:
		    v <- ot[i]
			TMT[v] <- Infinito
            para z <- 1 até n incl.:
				se z é vizinho de v:
					TMT[v] <- min(TMT[v], TMT[z]);
			se TMT[v] == Infinito:
				TMT[v] <- TMC[v]
			senão:
				TMT[v] <- TMT[v]-C[v]
			F[v] <- TMV[v] - TMC[v]		 
    */
}

int main(){
    srand(time(NULL));
	n=7; m=10;
	while(true){    
        Inicializa(n);
	    //Cria Rede
		u=1;  i=1;   cout<<"Rede:"<<endl;         
        while(true){
        	if (i>n && u==1) break;
            w = u+ rand()%(n-u)+1;  
			if (w > n) w=n;
			if (E[u][w]==0){
			    E[u][w] = 1;   i++;  cout<<u<<" "<<w<<endl;
			}
			if (w == n) u=1;
			else u=w;
        }
        cout<<"Custos dos vertices:";
        for(i =1;i <= n-1;  i++) {C[i] = rand()%n+2;  cout<<"C["<<i<<"]="<<C[i]<<" "; } cout<<"C["<<n<<"]=0"<<endl<<endl;
		C[n] = 0;  
        for (i=1; i<=n; i++)
            if(pre[i] == 0)
                OrdTop(i,i);
        cout<<"Ordenacao Topologica: ";
        for (i=1; i<=n; i++) cout<<ot[i]<<" ";   cout<<endl;
		PreencheTMC();
		PreencheTMT();
		cout<<"Parametros dos vertices"<<endl;
		for (i=1; i<=n; i++)
		    cout<<i<<": "<<"TMC("<<i<<")="<<TMC[i]<<" TMT("<<i<<")="<<TMT[i]<<" F("<<i<<")="<<F[i]<<endl;
		cin.get();			     
    }
    return 0;
}
