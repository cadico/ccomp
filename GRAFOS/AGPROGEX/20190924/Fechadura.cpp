/* Neste programa voc� vai trabalhar com o seguinte probelam:
    uma fechadura digital tem 4 d�gitos e 3 bot�es associados. Sempre que est� 
	ociosa, a fechadura fica com �0000�. A cada aperto do  primeiro bot�o, o mecanismo 
	o valor a ao mostrador. A cada aperto do segundo, soma b. A cada aperto do terceiro, c.
	A cada aperto de um dos bot�es, se a soma ultrapassar 4 d�gitos, o resultado � truncado
	para 4 d�gitos. 
	Quer-se saber o n�mero m�nimo de apertos que devem ser executados para se atingir a senha
	s 	que abre a fechadura.
	Mmodelar esse problema com grafos, de forma a  resolv�-lo usando Dijkstra. 
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


