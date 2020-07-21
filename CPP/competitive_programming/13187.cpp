#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
	long long int t, S, i, n;
	fscanf(stdin, "%ld", &t);
	for (i = 0; i < t; i++)
	{
		fscanf(stdin, "%ld", &S);
		n =  (S+1)*(S+1) - 1;
		cout << n << endl;
	}
	return 0;
}
