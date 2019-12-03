/*Neste programa você vai trabalhar com o problema da Arbitragem.
   A matriz gerada está correta, do ponto de conversões de taxas
   cambiais, isto é, não há oportunidades de ganhos.
1. Introduza um erro no trecho do programa "Introduzir erros", para
   que o digrafo tenha ciclo negativo.
2. Quando houver ciclo negativo, identifique (manualmente) esse ciclo.
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
const int NVM=1001;
      int INF=1000000000;

// Declarações para o grafo
int n, m; double E[NVM][NVM], Di[NVM];

void Inicializa(int n){
    memset(E, 0, sizeof(E));
    for (int i=1; i<=n; i++) Di[i]=INF; 
}
bool MaiorDouble(double a, double b){
    return ((fabs(a - b)>1e-5) &&(a > b)); 
}
void BellmanFord(int v){
	Di[v]=0;
	for(int i=1; i<n; i++)
		for(int j=1 ; j<=n; j++)
    		for(int k=1; k<=n; k++)
		    if((E[j][k]) && (MaiorDouble(Di[k],Di[j]+E[j][k]))){
			    Di[k] = Di[j] + E[j][k];
		     }            
    //Detecção de ciclo negativo
	for(int j=1 ; j<=n; j++)
   		for(int k=1; k<=n; k++)
			if((E[j][k]) && (MaiorDouble(Di[k],Di[j]+E[j][k]))){
                cout<<"Ciclo negativo detectado no vertice "<<k<<endl;  
                break;
			}         
}

int main(){
    int i, j, k, l;
	while (true){
        //gera matriz de conversão de moedas 
        n =rand()%4+2;  
	    Inicializa(n); 
        for (i=1; i<=n; i++) E[i][i]=1;      
        for(j=2; j<=n; j++){
	        E[1][j] = (double) (rand()%20+1)/(rand()%20+1);  E[j][1]=1/E[1][j];
            for (i=j-1; i>1; i--)  {
			    E[i][j] = (double) (1/(E[1][i]*E[j][1]));
			    E[j][i]=1/E[i][j];		
	        }
        }
        // Introduzir erros
        if (rand()%4==0){

        }
        cout<<"Matriz de taxas de conversoes "<<n<<"x"<<n<<endl;	        
		for(i=1; i<=n; i++){
            for (j=1; j<=n; j++) cout<<setw(10)<<setprecision(5)<<E[i][j]; cout<<endl;
		}
		cout<<endl;
        for(i=1; i<=n; i++) for (j=1; j<=n; j++)  {
			E[i][j] = -log(E[i][j]);		
		}
        cout<<"Matriz de taxas de conversoes adaptada "<<n<<"x"<<n<<endl;
		for(i=1; i<=n; i++){
            for (j=1; j<=n; j++) cout<<setw(10)<<setprecision(5)<<E[i][j]; cout<<endl;
		}
        cout<<endl;
	    BellmanFord(1);	
        cout<<"Vetor de Distancias"<<endl;
        for (j=1; j<=n; j++) cout<<setw(10)<<setprecision(5)<<Di[j]; cout<<endl; 
	    cin.get();
	}
	return 0;
}


