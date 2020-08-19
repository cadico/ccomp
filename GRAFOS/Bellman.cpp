/*Neste programa você vai trabalhar com o algoritmo de Bellman Ford
   para digrafos, usando a representação de matriz de adjacências,
   e nostrando caminhos mínimos entre dados vértices.
1. Imprima as distâncias mínimas e o vetor VCM.
2. Implemente o procedimento para mostrar o caminho mínimo. 
   Teste antes se existe o caminho.
3. Encontre um digrafo com ciclo negativo e confira esse ciclo.
 */
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
const int NVM=1001;
      int INF=1000000000;

// Declarações para o grafo
int n, m, E[NVM][NVM], Di[NVM], VCM[NVM], CM[NVM];

void Inicializa(int n){
    memset(E, 0, sizeof(E));
    memset(VCM, 0, sizeof(VCM));
    for (int i=1; i<=n; i++) Di[i]=INF; 
}

void BellmanFord(int v){
	Di[v]=0;
	for(int i=1; i<n; i++)
		for(int j=1 ; j<=n; j++)
    		for(int k=1; k<=n; k++)
				if((E[j][k]) && (Di[k] > (Di[j]+E[j][k]))){
					Di[k] = Di[j] + E[j][k];
                    VCM[k] = j;                         
                }
    //Detecção de ciclo negativo
	for(int j=1 ; j<=n; j++)
   		for(int k=1; k<=n; k++)
			if((E[j][k]) && (Di[k] > (Di[j]+E[j][k])))
                cout<<"Ciclo negativo detectado no vertice "<<k<<endl;           
}

void CaminhoMinimo(int v,int t){
   int tc;
/*  tc <- 1  
	CM[1]=t 
    enquanto (CM[tc] != v):
        CM[tc+1]<-VCM[CM[tc]]   
		tc++
    escrever (CM invertido)
*/
}

int main(){
    int a, b, i, j, c, k, v, t;
    a=3;  b=4;
	while (true){
        //gera digrid de dimensões a x b 
        n =a*b;  cout<<"Grid de dimensoes "<<a<<"x"<<b<<endl;
	    Inicializa(n);        
        for(i=1; i<=a; i++) for (j=1; j<b; j++){
            k = (i-1)*b+j;   c = rand()%10-5;  E[k][k+1]=c;
            cout<<k<<" "<<k+1<<" "<<c<<endl;
        }
        for(i=2;i<=a;i++) for (j=1; j<=b; j++){
            k = (i-1)*b+j;   c = rand()%10-5;  E[k][k-b]=c;
            cout<<k<<" "<<k-b<<" "<<c<<endl;
        }
        for(k=2;k<=8;k++){
            i=rand()%(a*b)+1;  j=rand()%(a*b)+1;  c = rand()%10+1;  
            if (E[i][j]==0) {
                E[i][j]=c;    cout<<i<<" "<<j<<" "<<c<<endl;
            }
        }
	    cout<<"Vertice inicial: "; cin>>v;
	    BellmanFord(v);	  
	    while(true){
            cout<<endl<<"Caminho minimo para t= "; cin>>t;
	        if (!t) break;
            CaminhoMinimo(v,t);
        }
	}
	return 0;
}


