/* Neste programa você vai trabalhar com o seguinte probelam:
    uma fechadura digital tem 4 dígitos e 3 botões associados. Sempre que está 
	ociosa, a fechadura fica com ‘0000’. A cada aperto do  primeiro botão, o mecanismo 
	o valor a ao mostrador. A cada aperto do segundo, soma b. A cada aperto do terceiro, c.
	A cada aperto de um dos botões, se a soma ultrapassar 4 dígitos, o resultado é truncado
	para 4 dígitos. 
	Quer-se saber o número mínimo de apertos que devem ser executados para se atingir a senha
	s 	que abre a fechadura.
	Mmodelar esse problema com grafos, de forma a  resolvê-lo usando Dijkstra. 
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
const int NVM=1001;
      int INF=1000000000;
int n;



void Dijkstra(int v){


}

void CriaGrafo(){


}

int main(){
    int i, j, a, b, c, s;
	n = 10000;  
	while (true){
        cout<<endl<<"Informe a, b, c, s = ";  cin>>a>>b>>c>>s;
		CriaGrafo();
		Dijkstra(0);
		cout<<"O numero de passos eh "<<endl;        	    
	}
	return 0;
}


