/*Neste programa voc� vai trabalhar com a representa��o especial 
    para um grafo grade  a x b.
1. Observe a declara��o do grafo: vari�veis n, m, matriz E, vetor de graus D.
2. Observe que a impress�o do grafo est� pronta;
3. Implemente a cria��o do grafo grade.*/
#include<iostream>
#include<string.h>
using namespace std;
const int NVM=1000001;

// Declara��es para o grafo
bool E[NVM][4];
int n, m;
//Outras declara��es
int a, b, i, j, u, w;

void Inicializa(){
    memset(E, 0, sizeof(E));
}
void CriaGrade(int a, int b){


}

int main(){
    while(true){
   	    cout<<endl<<"a, b = ";  cin >> a >> b;
	    Inicializa();
	    CriaGrade(a, b);
	    cout<<"Vizinhan�a:"<<endl;
	    for(i = 1; i<=n; i++){
			cout<<i<<" : ";
			for(j=0; j<=3; j++) 
			    if (E[i][j] != 0) cout<<E[i][j]<<" ";
			cout<<endl;
	    }
	}
	return 0;
}


