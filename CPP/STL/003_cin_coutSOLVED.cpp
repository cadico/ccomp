// Este programa mostra o funcionamento b�sico de cin e cout.
// 1. Rode o programa da forma que est�.
// 2. Verifique que a leitura est� preparada para executar at� fim de arquivo.
//    Mude isso para terminar quando ler (a = 0, b = 0).
//    Mude a impress�o para escrever as seguintes tr�s linhas:
//     * Na primeira linha, escreva os inteiros lidos separados por espa�o
//     * Na segunda linha, escreva a soma a+b
//     * Na terceira, escreva o resultado de a^2 + b^2;

#include <iostream>
using namespace std;

int main() 
{
    int a=1, b=1;
    cin >> a >> b;
    while( (a != 0) || (b != 0) )
    {
        cout << a << " " << b << endl;
        cout << a+b << endl;
        cout << (a*a) + (b*b) << endl;
        cin >> a >> b;  
    }
    return 0;
}
