#include <iostream>

using namespace std;

long long int FP, FH, A ,V;

int main()
{
	long long int cont = 1;
	while(cin >> FP >> FH)
	{
		A = ((5 * FP) + (6 *FH))/2;
		V = A + 2 - (FH + FP);
		cout <<  "Molecula #" << cont << ".:." << endl << "Possui " << V << " atomos e " << A << " ligacoes" << endl << endl;
		cont++;
	}
}

