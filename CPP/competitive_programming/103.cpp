#include <bits/stdc++.h>

#define MAXN 1010

using namespace std;

vector<int> v[31];
int k, b, input;
int n, m, mc, cpre, cpos, pre[MAXN], ot[MAXN], dm[MAXN], E[MAXN][MAXN];

void Imprmc(int u){
    int w;     
	cout << u << endl;
	for(int w = 0; w < k; w++){
		if(E[u][w]){
			if(dm[w] == (dm[u]-1)){
				Imprmc(w);
				break;
			}
		}
	}
}
void OrdTop(int u, int v){
    int w;
	pre[v] = ++cpre;
	for(int w = 0; w < k; w++){
		if(E[v][w]){
			if(!pre[w]){
				OrdTop(v,w);
			}
			//dm[v] = max(dm[v], dm[w] + 1);
		}
	}
	ot[cpos--] = v; 
	//mc = max(mc, dm[v]);
}

void Inicializa(int n){
    memset(pre, 0, sizeof(pre));
    memset(dm,  0, sizeof(dm));
	memset(v, 0, sizeof(v));	
	memset(E, 0, sizeof(E));	
	cpre = 0;  cpos = n;  mc = 0;
}

int main(void){
	while(cin >> k >> b){
		Inicializa(k);
		for(int i = 0; i < k; i++){
			for(int j = 0; j < b; j++){
				cin >> input;
				v[i].push_back(input);
			}
		}
		for(int i = 0; i < k; i++) sort(v[i].begin(), v[i].end());
		for(int i = 0; i < k; i++){
			for(int j = i + 1; j < k; j++){
				for(int x = 0; x < b; x++){
					if(v[i][x] >= v[j][x]){
						E[i][j] = 1;
					}	
				}
			}
		}
        for (int i = 0; i < k; i++)
            if(pre[i] == 0)
                OrdTop(i,i);
        cout<<"Distancias maximas a um sumidouro: ";
        for (int i=0; i < k; i++) cout<<dm[i]<<" ";    cout<<endl; 
        cout<<"Caminho maximo a um sumidouro: ";   
        for (int i=0; i < k; i++) if (dm[i] == mc) Imprmc(i);  cout<<endl;  
	}
	return 0;
}
