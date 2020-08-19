/*Neste programa voc� vai trabalhar com o algoritmo de Floyd
   para digrafos, usando a representa��o de matriz de adjac�ncias,
   e nostrando caminhos m�nimos entre dados v�rtices, calculados atrav�s
   de dois algoritmos distintos.
1. Implemente os procedimentos Floyd, CaminhoMinimo1 e CaminhoMinimo2.
2. Confira (na m�o) o caminho m�nimo para um grafo escolhido.
*/
#include<iostream>
#include<string.h>
#include<iomanip>
#include<stdlib.h>
using namespace std;
const int NVM=1001;
      int INF=1000;

// Declara��es para o grafo
int n, m, pre[NVM], E[NVM][NVM], D[NVM][NVM], VCM[NVM][NVM];

void Inicializa(int n){
    memset(E, 0, sizeof(E)); 
}

void Floyd(){
	int i, j, k;
/*  para i <- 1..n incl.:
		para j <- 1..n incl.:
			se E[i,j]=0 e i != j:
				D[i,j] <- INFINITO
			sen�o:
				D[i,j] <- E[i,j] 
				VCM[i,j] <- i
	para k <- 1..n incl.:
		para i <- 1..n incl.:
			para j <- 1..n incl.:
 				se D[i, j] > D[i, k] + D[k, j]:
					D[i, j] <- D[i, k] + D[k, j]
					VCM[i,j] <- VCM[k,j]
*/
}


void CaminhoMinimo1(int v,int t){
/*  ae (v != t) ent�o:
        CaminhoMinimo1(v, VCM[v,t])
	escrever (t)
*/
}

void CaminhoMinimo2(int v, int t, int d){
    int w;
/*  enquanto (d > 0):
		para w vizinho de v:
			se D[w,t] + E[v,w] = d:
				parar
		escrever (v)
		d <- d - E[v,w]
		v <- w
    escrever (t)

*/
}


int main(){
    int i, j, a, b, c, x, k,v,t;  
	while (true){
        cout<<endl<<"Dimensoes do grid: a b = ";  cin>>a>>b;
        n =a*b;  cout<<"Grid de dimensoes "<<a<<"x"<<b<<endl;
	    Inicializa(n);        
        for(i=1;i<=a;i++) for (j=1; j<b; j++){
            k = (i-1)*b+j;
            c = rand()%10+1;    x = rand()%3;
            if (x==0){
				E[k][k+1]=c;   cout<<k<<" "<<k+1<<" "<<c<<endl;
			}
            else if (x == 1){
				E[k+1][k]=c;   cout<<k+1<<" "<<k<<" "<<c<<endl;
			}
            else{
				E[k][k+1]=E[k+1][k]=c; 	 cout<<k<<" "<<k+1<<" "<<c<<endl;  cout<<k+1<<" "<<k<<" "<<c<<endl;
			}							
        }
        for(i=2;i<=a;i++) for (j=1; j<=b; j++){
            k = (i-1)*b+j;
            c = rand()%10+1;  x = rand()%3;
            if (x==0){
				E[k][k-b]=c;   cout<<k<<" "<<k-b<<" "<<c<<endl;
			}
            else if (x == 1){
				E[k-b][k]=c;   cout<<k-b<<" "<<k<<" "<<c<<endl;
			}
            else{
				E[k][k-b]=E[k-b][k]=c;    cout<<k<<" "<<k-b<<" "<<c<<endl;  cout<<k-b<<" "<<k<<" "<<c<<endl;
			}
        }
        Floyd();
        // Matriz de Dist�ncias m�nimas
        cout<<"Matriz D: "<<endl; 
	    for (i=1; i<=n; i++){
	        for (j=1; j<=n; j++) cout<<setw(5)<<D[i][j];
	        cout<<endl;	    
	    }
        // Matriz de VCM
        cout<<"Matriz VCM: "<<endl; 
	    for (i=1; i<=n; i++){
	        for (j=1; j<=n; j++) cout<<setw(3)<<VCM[i][j];
	        cout<<endl;	    
	    }
	    while(true){
            cout<<endl<<"Caminho minimo entre v, t = " ; cin>>v>>t;
	        if (!v) break;
	        if (D[v][t] != INF){
                CaminhoMinimo1(v,t);   cout<<endl;        
                CaminhoMinimo2(v,t,D[v][t]);  cout<<endl;
            }
            else cout<<"Nao ha cminho"<<endl;
        }	    
	}
	return 0;
}


