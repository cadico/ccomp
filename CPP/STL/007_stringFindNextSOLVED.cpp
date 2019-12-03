// Este programa continua a apresentar facilidades para busca de 
// substrings, usando o comando find, mas agora com mais parâmetros.
// 1. Rode o programa como ele está.
// 2. Acrescente o código para contar quantas substrings existem 
//    na string procurada, imprimindo as posições em que encontrá-las.
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
