// Neste progama demonstramos como usar o b�sico do bitset
// 1. Complete a fun��o imprime_binario para que imprima o
//    n�mero a passado no formato bin�rio (32-bit).
// 2. Complete a fun��o imprime_decimal para que imprima a
//    string de bits passada no formato decimal. Por exemplo,
//    deve converter "01011" para 11.
// 3. Complete a fun��o teste_palindromo para que retorne TRUE
//    caso os bits da bitset passada constituam um pal�ndromo,
//    isto �, uma bitset que pode ser lida igualmente de tr�s
//    para frente.
//		10101 � um pal�ndromo
//		00000 � um pal�ndromo
//		00100 � um pal�ndromo
//		00011 n�o � um pal�ndromo
#include <iostream>
#include <bitset>
#include <string>
using namespace std;

void imprime_binario(unsigned long a) {
	bitset<32> b(a);
	cout << b << endl;
}

void imprime_decimal(string a) {
	bitset<32> b(a);
	cout << b.to_ulong() << endl;
}

template<int N>
bool teste_palindromo(const bitset<N> & b) {
	int i,j = b.size() - 1;
	int chave = 1;
	for (i=0; i<b.size(); i++)
	{
		if (b[i] != b[j])
		{
			chave = 0;
			break;
		}
		j--;
	}
	return chave;
}

int main() 
{
	imprime_binario(16);
	imprime_decimal("01011");

	bitset<10> b1(string("0110110110")); //Pal�ndromo
	bitset<10> b2(string("0110110111")); //N�o � pal�ndromo
	// Descomente esse trecho para fazer a quest�o 3
	cout << boolalpha;
	cout << teste_palindromo<10>(b1) << endl;
	cout << teste_palindromo<10>(b2) << endl;
	

	return 0;
}
