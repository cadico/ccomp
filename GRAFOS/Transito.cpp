/*Neste programa voc� vai trabalhar com o problema de Planejamento de 
  Mudan�as no tr�nsito: � dado um digrafo representando o tr�nsito
  de uma cidade. Quer-se fazer um teste, interrompendo, gradativamente, 
  um trecho de rua. Para cada aresta retirada � necess�rio responder se, 
  se todos os pontos continuam alcan�ando os demais. Para cada aresta *u,v)
  sorteada, voc� deve responder se a alcan�abilidade continua sendo total.
  A determina��o de componentes fortemente conexos ser� feita pelo algoritmo
  de Kosaraju.
2. Implemente o algoritmo de Kosaraju e o teste de interrup��o de tr�nsito.
3. desenhe um digrafo de teste para n=8 e cheque o resultado.*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
const int NVM=1001;

// Declara��es para o grafo
int n, m, cpre, cpos, comp, pre[NVM], ot[NVM], E[NVM][NVM];

//Outras declara��es
int i, j, u, v, k;

void  CriaTransito(){
    int i, j, k, u, v;
    for (i=1; i<=n; i++) E[i][i%n + 1] = 1;
    k = rand()%(n*(n-1)/2-n)+1;  m = n+k;
    while(k--){
        u=v=0;
        while (u==v || E[u][v]==1){
		    u = rand()%n+1;  v = rand()%n+1;
        }
        E[u][v]=1;
    }
    cout<<"Rede de Transito:"<<endl;
	for (i=1; i<=n; i++){
        cout<<i<<":";   for (j=1; j<=n; j++) if (E[i][j]==1) cout<< " "<<j;  cout<<endl;
    }
} 
void InicializaCFC(){
    memset(pre, 0, sizeof(pre));   memset(ot, 0, sizeof(ot));    
	cpre = 0;  cpos = n;  comp = 0;
}
void Inicializa(){
    memset(E, 0, sizeof(E));   
	memset(pre, 0, sizeof(pre));   memset(ot, 0, sizeof(ot));    
    CriaTransito(); 
}

void OrdTop(int v){
    pre[v]=++cpre;
    for(int w=1; w<=n; w++)
        if (E[v][w]==1 && pre[w]==0) 
			OrdTop(w);
    ot[cpos--]=v;       
}
void BPT(int v){
    int w;
/*  desmarcar v 
    para w vizinho de v no digrafo transposto:
        se w marcado:
			BPT(v,w)
*/      
}
int Kosaraju(){
    int i;
    /*  para i <- 1..n incl.:
    	    se i n�o marcado:
    	        OrdTop(i)
    	para i<-1..n incl.:
    		se ot[i] marcado:
    			comp++
				BPT(ot[i])
		retornar comp
    */
}


int main(){
    srand(time(NULL));
    while(true){    
        cout<<"n = ";   cin>>n;   
		Inicializa();
		cout<<endl<<"Teste de interrup��o de tr�nsito:"<<endl;
		//Teste de interrup��o de tr�nsito
		while(true){
			InicializaCFC();
			u=v=1;
        	while (E[u][v]==0){
		    	u = rand()%n+1;  v = rand()%n+1;
        	}
        	E[u][v]=0;
			// Complete aqui o teste de interrup��o de tr�nsito
			cout<<"Interrupcao da aresta: "<<u<<" "<<v;
		  
			cin.get(); 
		}
		//
         
    }
    return 0;
}
