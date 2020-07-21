#include <iostream>
#define MODULO 1000000007
using namespace std;

int PotMod(int a, int b, int n){
    long long int m, c, d, rb[101];  int i, j;
    m= b;   i= 101;
    while (m > 0){
        rb[--i]= m % 2;   m= m /2;
    }
    c= 0; d= 1;
    for(j=i; j<= 100; j++){
        d= (d*d) % n;    c= 2*c;
        if (rb[j] == 1){
            d= (d*a) % n;   c++;
        }
        //cout << rb[j] << " " << c << " " << d <<endl;
    }
    return (int) d;
}

int main()
{
	int test;
	int N;
	long long int teams = 0, aux1 = 0, aux2 = 0;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		cin >> N;
		aux1 = (N % MODULO);
		aux2 = (PotMod(2, (N-1), MODULO)) % MODULO;
		teams = (aux1 * aux2) % MODULO;
		cout << "Case #" << i+1 << ": " << teams << endl;
		teams = 0;
	}
	return 0;
}

