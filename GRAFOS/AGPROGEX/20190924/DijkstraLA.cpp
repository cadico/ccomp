/*Neste programa você vai trabalhar com o algoritmo de Dijkstra
   para digrafos, usando a representação de lista de adjacências.
   Para achar as distâncias mínimas usa uma lista de priopridades.
2. Imprima e confira o vetor de distâncias mínimas.
3. Iniba a impressão do grafo  e teste para qual valor máximo de axb
   você consegue rodar o programa.
*/
#include <iostream>
#include<stdlib.h>
#include<vector>
#include<queue>
using namespace std;
typedef pair<int, int> pii;
const int NVM=10000001;
      int INF=1000000000;

int n, m, pre[NVM], D[NVM];
vector<pii> adj[NVM];
priority_queue<pii> q;
int tam, ans;

void dijkstra(int u) {
    priority_queue<pii> q;   int i, v, w, c;
    for(int i=1; i<=n; i++){ 
		pre[i]=0;
		D[i]=INF;
	}
    D[u]=0;
    q.push(pii(0, u));
    while(!q.empty()) {
        v = q.top().second;  q.pop(); 
        if(! pre[v]){
        	pre[v]=1;
        	for(i=0; i<adj[v].size(); i++) {
            	w = adj[v][i].first;
            	c= adj[v][i].second;
            	if(D[w] > D[v]+c) {
                	D[w] = D[v]+c;
                	q.push(pii(-D[w], w));
            	}
        	}
        }
    }
}

int main() {
    int i, j, a, b, c, k;
    //a = 3;  b= 4;  
    while(true){
        cout<<"Dimensoes do grid: a b = ";  cin>>a>>b;
        //gera grid de dimensões a x b 
        n =a*b;  cout<<a<<" "<<b<<endl;
        for (i=1; i<=n; i++) adj[i].clear();
        for(i=1; i<=a; i++) for (j=1; j<b; j++){
            k = (i-1)*b+j;
            c = rand()%8+1;                  
            adj[k].push_back(pii(k+1, c));   adj[k+1].push_back(pii(k, c)); 
            cout<<k<<" "<<k+1<<" "<<c<<endl;
        }
        for(i=2; i<=a; i++) for (j=1; j<=b; j++){
            k = (i-1)*b+j;
            c = rand()%9+1;
            adj[k].push_back(pii(k-b, c));   adj[k-b].push_back(pii(k, c)); 
            cout<<k<<" "<<k-b<<" "<<c<<endl;
        }        
        dijkstra(1);
        cin.get();
    }
    return 0;
}
