#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int N, A, B, C, D, E;
	cin >> N;
	while (N)
	{
		A = 0; B = 0; C = 0; D = 0; E = 0;
		for(int i = 0; i < N; i++)
		{
			scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
			if (A <= 127 && B > 127 && C > 127 && D > 127 && E > 127)	cout << 'A' << endl;
			else if (B <= 127 && A > 127 && C > 127 && D > 127 && E > 127)	cout << 'B' << endl;
			else if (C <= 127 && A > 127 && B > 127 && D > 127 && E > 127)	cout << 'C' << endl;
			else if (D <= 127 && A > 127 && B > 127 && C > 127 && E > 127)	cout << 'D' << endl;
			else if (E <= 127 && A > 127 && B > 127 && C > 127 && D > 127)	cout << 'E' << endl;
			else	cout << "*" << endl;
		}
		cin >> N;
	}
	return 0;
}
