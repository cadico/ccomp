/*Neste programa você vai trabalhar com o fechamento transitivo de um
  digrafo usando a potenciação de matrizes.
1. Estude o procedimento PotM.  
2. Rode o programa para C8 e verifique
   a) que não está sendo feito o fechamento transitivo.
   b) explique o que está sendo feito.
   c) complemente o programa para que seja feito o fechamento transitivo.
*/
#include<iostream>
#include<string.h>
using namespace std;
const int NVM=101;

// Declarações para o grafo
int n, m, cpre, cpos, comp, pre[NVM], ot[NVM], E[NVM][NVM], 
    F[NVM][NVM], FI[NVM][NVM], A[NVM][NVM];

//Outras declarações
int i, j, k, u, w;

void Inicializa(int n){
    memset(E, 0, sizeof(E));
    memset(pre, 0, sizeof(pre));
	comp = 0;  cpre = 0;  cpos = n;
}
void PM(int np){
    int i, j, k, t;
    if (np>= 1){
        PM(np/2);
	    memset(A, 0, sizeof(A));   
	    for (i=1; i<=n; i++) for (j=1; j<=n; j++){
	        t = 0;  for (k=1; k<=n; k++) t +=F[i][k]*F[k][j];
	        A[i][j] = t;
		}
	    for (i=1; i<=n; i++) for (j=1; j<=n; j++) F[i][j] = A[i][j];		        
        if (np%2 == 1){
 	        for (i=1; i<=n; i++) for (j=1; j<=n; j++){
	            t = 0;  for (k=1; k<=n; k++) t +=F[i][k]*FI[k][j];
	            A[i][j] = t;
		    }
	        for (i=1; i<=n; i++) for (j=1; j<=n; j++) F[i][j] = A[i][j];			       
        }
        np = np/2;
    }
}
void PotM(int np){
    int i, j, k, t;
    memset(F, 0, sizeof(F));  
    for (i=1; i<=n; i++) F[i][i] = 1; 
    for (i=1; i<=n; i++) for (j=1; j<=n; j++) FI[i][j] = E[i][j];    			
    //Completar a inicialização para o Fechamento Transitivo
    
    //
    PM(np);
	//Imprimir F 
	cout<<"Fechamento transitivo: np = "<<np<<endl;
	for (i=1; i<=n; i++){
	    for (j=1; j<=n; j++) cout<<F[i][j]<<" ";  cout<<endl;
	}
	cout<<endl;    
}

int main(){
    while(true){    
        cout<<endl<<"n m = ";  cin >>n>>m;
        Inicializa(n);
	    cout<<"Arestas:"<<endl;        
        for(i =1;i <= m;i++){
            cin>> u >> w; E[u][w] = 1;
        }
        for (k=1; k<=n-1; k++){
            PotM(k);

	    }					
    }
    return 0;
}
