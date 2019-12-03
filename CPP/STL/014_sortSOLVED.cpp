// Este programa mostra as facilidades do uso de sort.
// 1. Rode o programa como est�.
// 2. Mude o vetor de inteiro para char e crie o vetor com as vogais mai�sculas e
//    min�sculas.
// 3. Modifique a ordena��o para as letras min�sculas virem antes das mai�sculas.
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<char> v;

void print() 
{   for(int i = 0; i < v.size(); i++) 
    {   cout << v[i] << " ";
    }
    cout << endl;
}

bool custom(char a, char b) { return a > b; }

int main()
{   v.push_back('A');    v.push_back('a');    v.push_back('E');    v.push_back('e');
    v.push_back('o');    v.push_back('I');    v.push_back('O');	   v.push_back('i');
    v.push_back('u');    v.push_back('U');
    
    print();
    sort(v.begin(), v.end());
    print();
    sort(v.begin(), v.end(), greater<char>());
    print();
    sort(v.begin(), v.end(), custom);
    print();

    return 0;
}

