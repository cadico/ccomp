/*Neste programa você vai trabalhar com a implementação do Fluxo Máximo
   usando DFS e Matriz de Adjacências.
2. Implemente o algoritmo ExisteCaminho.
3. Imprima a rede para n=7 e confira o fluxo máximo.
4. imprima também a rede final.
*/
#include <iostream>
#include<stdlib.h>
#include<string.h>
#define INF 0x3f3f3f3f
#define NVM 1200
using namespace std;

struct no{int c; int fl;};

int pre[NVM], n, m;
no  E[NVM][NVM], EC[NVM][NVM];

void ImprimeF(){
        cout<<"Fluxo:"<<endl;
        for(int i=1;i<=n;i++) { 
            for(int j=1;j<=n;j++) { 
                if (E[i][j].fl > 0) cout << i << " " << j << "  "<<E[i][j].fl<<endl;
            }        
        }     
}
void ImprimeC(){
        cout<<"Rede:"<<endl;
        for(int i=1;i<=n;i++) { 
            for(int j=1;j<=n;j++) { 
                if (E[i][j].c > 0) cout << i << " " << j << "  "<<E[i][j].c<<endl;
            }        
        }     
}

int ExisteCaminho(int t, int s, int minf) {
    int i, fm;
/*
    pre[t] <- 1
    se t=s: 
	    retornar minf
    para i <- 1..n incl:
	    se !pre[i] e E[t][i].c > 0:
            se (fm <- ExisteCaminho(i, s, min(minf, E[t][i].c))):
                E[t][i].c <- E[t][i].c-fm  
				E[i][t].c <- E[i][t].c+fm
 		        E[t][i].fl <- E[t][i].fl+fm 
				E[i][t].fl <- E[i][t].fl-fm
                retornar fm
    retornar 0
*/
	return 0;
}

int main() {
    int fmax, u, i, j;
    n=3;
    while(true){
        n++;
	    m = n*n/30+n+2;
        for(int i=1; i<=n; i++) for (int j=1; j<=n; j++){ E[i][j].c=0;  E[i][j].fl=0; }
        //Criação da rede
        u=1;   for(int i=1; i<n/2; i++){ E[u][i+1].c=rand()%10+1;  u=i+1;}  E[u][n].c=rand()%10+1;    
        u=1;   for(int i=n/2; i<n; i++){ E[u][i+1].c=rand()%10+1;  u=i+1;} 
        for(int i=n+1; i<=m; i++){
            int u= rand()%(n-1)+1;  int v=rand()%(n-1)+2;
            while ((u==v) || (E[u][v].c != 0)){u= rand()%(n-1)+1;  v=rand()%(n-1)+2;}
            E[u][v].c = rand()%10+1;       
        }  
        cout<<" n= "<<n<<" m= "<<m<<endl;
        ImprimeC();
        //Maxflow com DFS
        fmax = 0;
        memset(pre, 0, sizeof(pre));           
        while(int fm = ExisteCaminho(1, n, INF)) {
           fmax += fm;
            memset(pre, 0, sizeof(pre));   
        }                
        cout<<"Fluxo Maximo = "<<fmax<<endl;
		ImprimeF();       
        cin.get();
    }    
}
