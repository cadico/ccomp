// Este programa continua a apresentar facilidades para busca de 
// substrings, usando o comando find, mas agora com mais par�metros.
// 1. Rode o programa como ele est�.
// 2. Acrescente o c�digo para contar quantas substrings existem 
//    na string procurada, imprimindo as posi��es em que encontr�-las.
#include <iostream>
using namespace std;

int main()
{
     string s = "Hello World, World, World, World, World, World.";
     int pos = s.find("World" );
     int cont = 1;
	 cout << pos << endl; 
     pos = s.find("World", pos+1);
     while (pos != -1)
     {
     	cout << pos << endl;
     	pos = s.find("World", pos+1);
     	cont++;
	 }
     cout << "Quantidade de substrings: " << cont << endl;

     return 0;
}
