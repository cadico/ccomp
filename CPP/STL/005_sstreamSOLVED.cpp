// Este programa lê um string e separa e apresenta suas palavras.
// 1. Rode o programa da forma que está.
// 2. Acrescente código para ler vários inteiros e apresentar sua soma.

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string linha;
    int n;
    istringstream ss;
    int soma = 0;
    getline(cin, linha) ;
    ss.str(linha);
    while(ss >> n) { 
    	soma += n; 
    }
    cout << soma << endl;
    return 0;
}
