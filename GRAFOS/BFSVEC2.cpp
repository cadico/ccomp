/*Neste programa você vai trabalhar com a Busca em Largura (BFS) em um grafo 
   simples, usando a representação de listas de adjacências com vector.
2. Programe a determinação de um caminho mínimo entre vértices. */
#include <stdio.h>
#include <string.h> 
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
const int NVM=1001;
struct no{int v;  int d; int p;};

// Declarações para o grafo
vector<int> A[NVM];
int i, j, n, m, u, v, cpre, pre[NVM], D[NVM]; 
no  Q[NVM];

void Inicializa(int n){
    memset(pre, 0, sizeof(pre));
	cpre = 0;
	for (int i=0; i<=n; i++) A[i].clear();
}

void BFS(int v){
	no x;  int j, t, d, p, w, f=1, r=1;
    memset(pre, 0, sizeof(pre));
	pre[v] = ++cpre;   Q[1].v=v;  Q[1].d=0;  Q[1].p=0;
	while(f){
		x = Q[f];  t = x.v;  d = x.d;   p = x.p;
		for(j=0; j<A[t].size(); j++){
		    w = A[t][j];
			if( pre[w] == 0){
				pre[w] = ++cpre;   x.v = w;  x.d = d+1;   x.p = f;  Q[++r] = x;
			}
		}
		if (f == r) f=0;
		else f++;
	}
	for (i=1; i<=n; i++) cout<<Q[i].v<<" "<<Q[i].d<<" "<<Q[i].p<<" ";  cout<<endl;
}
void Caminho(int u, int v){
    int i, j, k=0, p, C[NVM];
/*  para i de 1 a n:
	    Se (Q[i].v = v) Entao
	    	j = i;  Parar loop;
	fp;
	enquanto (j != 0):
	    C[++k] = Q[j].v;
		j = Q[j].p;	
	fe;
	imprimir C invertido;
*/
}


int main(){
	while(true){
        cout<<"n m = ";   cin >> n>>m;
	    Inicializa(n);
	    cout<<"Arestas:"<<endl;	    
	    for(i=1; i<=m; i++){
		    cin >> u >> v;
            A[u].push_back(v);  A[v].push_back(u);
	    }
		while (true){
	    	cout<<endl<<"vertices do inicio e do fim da busca, 0 0 para terminar:";  cin>>u>>v;
			if (!u) break;
	    	BFS(u);
	    	cout<<"Caminho minimo de "<<u<<" para "<<v<<": ";
	    	Caminho(u, v);
		}
    }
	return 0;
}



