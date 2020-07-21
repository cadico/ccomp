/*Neste programa trabalha-se com um baralho usando listas encadeadas.
  1. Observe a declara��o do baralho. S�o usadas 3 listas: cab � o ponteiro para o baraalho,
      cab1 e cab2 s�o listas tempor�rias para o embaralhamento.
  2. Inicialmente voc� tem que completar a impress�o do baralho, pois s� se est� imprimindo uma carta.
  3. Observe que o embaralhamento n�o est� muito bom. Tente entender o
     procedimento para embaralhar e voc�  altere o programa para fazer um
     loop que garanta um bom embaralhamento. 
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef enum {paus, ouros, copas, espadas}naipe;
typedef enum {az, dois, tres, quatro, cinco, seis, sete, oito, nove, dez,
              valete, dama, rei} numero;
typedef struct carta* pont;
typedef struct carta{ naipe na; numero nu; pont prox;}carta;       
pont cab, cab1, cab2, z;

void CriaBaralho(){
pont p;  naipe n;  numero m;
    cab = new(carta);  cab1 = new(carta);  cab2 = new(carta);
    cab->prox = NULL;  cab1->prox = NULL;  cab2->prox = NULL;
    for(n=paus; n<=espadas; n=naipe(int(n)+1))
        for( m = az; m<=rei; m=numero(int(m)+1)){
            p = new(carta);  p->na = n;  p->nu = m; p->prox = cab->prox; cab->prox = p;
        }
}

void ImprimeCarta(pont p){
    if (p->nu == az)           cout<<"As ";
    else if (p->nu == dois)    cout<<"Dois ";
    else if (p->nu == tres)    cout<<"Tres ";
    else if (p->nu == quatro)  cout<<"Quatro ";
    else if (p->nu == cinco)   cout<<"Cinco ";
    else if (p->nu == seis)    cout<<"Seis ";
    else if (p->nu == sete)    cout<<"Sete ";
    else if (p->nu == oito)    cout<<"Oito ";
    else if (p->nu == nove)    cout<<"Nove ";
    else if (p->nu == dez)     cout<<"Dez ";
    else if (p->nu == valete)  cout<<"Valete ";
    else if (p->nu == dama)    cout<<"Dama ";
    else if (p->nu == rei)     cout<<"Rei ";
    if (p->na == paus)         cout<<"de paus."<<endl;
    else if (p->na == ouros)   cout<<"de ouros."<<endl;
    else if (p->na == copas)   cout<<"de copas."<<endl;
    else if (p->na == espadas) cout<<"de espadas."<<endl;
}

void ImprimeBaralho(pont cab){
     pont p;
     p = cab->prox;
     while (p != NULL){
     ImprimeCarta(p);
     p = p->prox;
 	}
}

void Embaralha(){
     pont p, p1, p2;  int i,a,nv;
     p = cab->prox;  a = (rand() % 20) + 16;
     for( i = 1; i <= 52; i++){
          cab->prox = p->prox;
          if (i <= a){
              p->prox = cab1->prox;  cab1->prox = p;
          }
          else{ 
              p->prox = cab2->prox;  cab2->prox = p;
          }
          p = cab->prox;
     }
     p1 = cab1->prox;  p2 = cab2->prox;
     for( i = 1; i <= 52; i++)
          if (((i%2==1) && (p1 != NULL)) || (p2 == NULL)){
              cab1->prox = p1->prox;  p1->prox = cab->prox;  cab->prox = p1; p1 = cab1->prox;
          }
          else{
              cab2->prox = p2->prox;  p2->prox = cab->prox;  cab->prox = p2; p2 = cab2->prox;
          }
}

int main(){
	int k;
    CriaBaralho();
    cout<<"Baralho apos a criacao:"<<endl;
    ImprimeBaralho(cab);
    for (k=1; k<=29; k++)
	{
		Embaralha();
	}
    cout<<endl<<"Baralho apos o embaralhamento:"<<endl;    
    ImprimeBaralho(cab);
    
    cin.get();
}
