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

int C[NVM][NVM], CC[NVM][NVM], F[NVM][NVM], n, m, nh, nm, np, fmax, nv, na;
bool V[NVM];  par P[100];

void Imprime(){
        cout<<"Fluxo:"<<endl;
        for(int i=1;i<=nv+2;i++) { 
            for(int j=1;j<=nv+2;j++) { 
                if (F[i][j] > 0) cout << i << " " << j << "  "<<F[i][j]<<endl;
            }        
        }     
}
void ImprimeC(){
        cout<<"Rede:"<<endl;
        for(int i=1;i<=nv+2;i++) { 
            for(int j=1;j<=nv+2;j++) { 
                if (CC[i][j] > 0) cout << i-1 << " " << j-1 << "  "<<CC[i][j]<<endl;
            }        
        }     
}

int ExisteCaminho(int v, int s, int mincap) {
    V[v] = true; 
    if (v==s) return mincap;
    for(int i=1; i<=nv+2; i++) {
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


int main() {
	int i,j,v1,v2;

    cin>>nv>>na;
    CC[nv+1][nv+2] = 3;
    CC[1][2] = 3;
    for (i = 1; i <= na; i++){
        cin >> v1 >> v2;
        CC[v1+1][v2+1] = 1;
    }
    for (i = 1; i <= nv+2; i++){
        for (j = 1; j <= nv+2; j++){
            cout << CC[i][j] << " ";
        }
        cout << endl;
    }
    for (int i=1; i<=n; i++) for (int j=1; j<=n; j++)
        C[i][j]=CC[i][j];
    fmax = 0;
    memset(V, 0, sizeof(V));           
    while(int fm = ExisteCaminho(1, nv+2, INF)) {
        fmax += fm;
        memset(V, 0, sizeof(V));
    }         
    Imprime();
    cout << endl;
    ImprimeC();
    cout << endl;
}
