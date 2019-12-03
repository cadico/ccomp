/*Neste programa voc� vai trabalhar com o problema do Grande Jantar.
1. Complete a fun��o CriaRede() que cria a rede.
2. Complete a fun��o TemSol que verifica se o problema foi resolvido.
3. Complete a fun��o MostraResultado, que imprime a aloca��o de pessoas �s mesas.
4. Rode o programa para o exemplo de sala.
*/
#include <iostream>
#include<stdlib.h>
#include<string.h>
#define INF 0x3f3f3f3f
#define NVM 1200
using namespace std;

int C[NVM][NVM], CC[NVM][NVM], F[NVM][NVM], n, m, fmax, nt, pt[100], nm, lm[100];
bool V[NVM];  

void Imprime(){
        cout<<"Fluxo:"<<endl;
        for(int i=1;i<=n;i++) { 
            for(int j=1;j<=n;j++) { 
                if (F[i][j] > 0) cout << i << " " << j << "  "<<F[i][j]<<endl;
            }        
        }     
}
void ImprimeC(){
        cout<<"Rede:"<<endl;
        for(int i=1;i<=n;i++) { 
            for(int j=1;j<=n;j++) { 
                if (CC[i][j] > 0) cout << i << " " << j << "  "<<CC[i][j]<<endl;
            }        
        }     
}

int ExisteCaminho(int v, int s, int mincap) {
    V[v] = true; 
    if (v==s) return mincap;
    for(int i=1; i<=n; i++) {
        if (!V[i] && C[v][i] > 0) {
            if (int fm = ExisteCaminho(i, s, min(mincap, C[v][i]))) {
                C[v][i] -= fm;  C[i][v] += fm;
                F[v][i] += fm;  F[i][v] -= fm;                
                return fm;
            }
        }
    }
    return 0;
}
void CriaRede(){
    int i, j;
    n = 2+nt+nm;
    m = nt+nt*nm+nm;
	for(i=1; i<=n; i++) for (j=1; j<=n; j++){ CC[i][j]=0;  F[i][j]=0; }
    /*Dicas para a cria��o da rede
        1. A fonte � o v�rtice 1
        2. Os times s�o os v�rtices 2 a nt+1
        3. As mesas s�o os v�rtices nt+2 a nt+m+1
        4. O sumidouro � o v�rtice n=nt+nm+2;   
		Preencher apenas o vetor de capacidades CC.    
    */

}
bool TemSol(){
    int i, tp;
    /* Esta fun��o deve verificar se o problema foi resolvido, isto �,
       se todas as pessoas de todos os times foram alocadas �s mesas.
    */

}
void MostraResultado(){
    int i, j;
    /* Dica: imprimir para cada mesa os times cujas arestas de fluxo (vetor F)
	   s�o positivas para essa mesa.
	   A saida deve ser assim:
	   Mesa 1: 1 3 5  (na mesa 1 sentaram 3 pessoas: uma do time 1, 1 do time 3 e 1 do 5.
	   ....    
    */

}

int main() {
    while(true){
       cout<<endl<<"Numero de times: "; 
	   cin>>nt;
       cout<<"Pessoas por time: ";
       for(int i=1; i<=nt; i++) cin>>pt[i];
       cout<<"Numero de mesas: "; 
	   cin>>nm;
       cout<<"Lugares nas mesas: ";
       for(int i=1; i<=nm; i++) cin>>lm[i];
       CriaRede();

       cout<<" n= "<<n<<" m= "<<m<<endl;
       for (int i=1; i<=n; i++) for (int j=1; j<=n; j++)
           C[i][j]=CC[i][j];
       fmax = 0;
       memset(V, 0, sizeof(V));           
       while(int fm = ExisteCaminho(1, n, INF)) {
           fmax += fm;
           memset(V, 0, sizeof(V));
       }         
       cout<<"Fluxo Maximo = "<<fmax<<endl;
       if (TemSol()) MostraResultado();             
       cin.get();
    }    
}
