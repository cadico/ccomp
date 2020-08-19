/*Neste programa voc� vai trabalhar com o problema do Casamento Est�vel.
1. Complete a fun��o CriaRede() que cria a rede.
2. Complete a fun��o MostraResultado, que imprime os casais que podem ser formados.
3. Rode o programa para o exemplo de sala.
*/
#include <iostream>
#include<stdlib.h>
#include<string.h>
#define INF 0x3f3f3f3f
#define NVM 1200
using namespace std;
struct par{int m;  int h;};

int C[NVM][NVM], CC[NVM][NVM], F[NVM][NVM], n, m, nh, nm, np, fmax;
bool V[NVM];  par P[100];

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
    n = nh+nm+2;
    m = nh+nm+np;
	for(i=1; i<=n; i++) for (j=1; j<=n; j++){ CC[i][j]=0;  F[i][j]=0; }
    /*Dicas para a cria��o da rede
        1. A fonte � o v�rtice 1
        2. Os homens s�o os v�rtices 2 a nh+1
        3. As mulheres s�o os v�rtices nh+2 a nh+nm+1
        4. O sumidouro � o v�rtice n=nh+nm+2;   
		Preencher apenas o vetor de capacidades CC.    
    */
    for(i = 1; i <= np; i++)    CC[1][P[i].h] = 1;
    for(i = 1; i <= np; i++)   CC[P[i].m][n] = 1;
    for(i = 1; i <= np; i++){
        CC[P[i].h][P[i].m] = 1;
    }
}

void MostraResultado(){
    int i, j;
    /* Dica: imprimir para cada mulher o homem alocado a ela, se existir.
       Para isso procurar o fluxo de sa�da do v�rtice correspondente, que �
       igual a 1.  
    */
   for(i = nh+2; i <= nh+nm+1; i++){
       for(j = 2; j <= nh+1; j++){
           if(F[i][j] == 1)
                cout << "Mulher: " << i << "Homem: " << j << endl;  
       }
   }

}

int main() {
	int i;
    // while(true){
    //    cout<<endl<<"Numero mulheres, homens e pares com interesse m�tuo: "; 
	   cin>>nm>>nh>>np;
	//    cout<<"Pares com interesse m�tuo:"<<endl;
	   for (i=1; i<= np; i++) cin >> P[i].m+nh+2 >> P[i].h+1;
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
       Imprime();
       cout << endl;
       ImprimeC();
       cout << endl;
       cout<<"Emparelhmento m�ximo = "<<fmax<<endl;
       MostraResultado();             
       cin.get();
    // }    
}
