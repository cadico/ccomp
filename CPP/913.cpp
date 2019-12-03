#include <iostream>

using namespace std;

long long int ntermo(long long int N, long long int a1)
{
	long long int termo;
	termo = a1 + (N-1) * 2;
	return termo;
}
int main()
{
	int i;
	long long int N, soma = 0, a1 = 0;
	
	while(cin >> N)
	{
		a1 = ((N/2) * (N - 1)) + 1;
		soma = 0;
		for (i = 0; i < 3; i++)
		{
			soma += ntermo(N-i, a1);
		}
		cout << soma << endl;
	}
	return 0;
}
