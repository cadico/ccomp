#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;
vector<int> F;
void Fatora (int q)
{   
	int rq;
    rq = sqrt(q);
	if (rq*rq < q) rq++;
    for (int i=2; i<=rq; i++)
    {   
		while((q % i) == 0)
        {   
			F.push_back(i);  q = q/i;
        }
    }
	if (q > 1)
	{
		 F.push_back(q);
	}
}

int main()
{
	int M, j, soma, N, i, e;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		soma = 1;
		scanf("%d", &M);
		Fatora(M);
		for (j = 0; j < F.size(); j++)
		{
			if (F[j] == F[j+1])
			{
				if (j != F.size() - 1)
					continue;
				else
				{
					e = count(F.begin(), F.end(), F[j]) + 1;
					soma *= (pow(F[j], e) - 1) / (F[j] - 1);
				}
			}
			else
			{
				e = count(F.begin(), F.end(), F[j]) + 1;
				soma *= (pow(F[j], e) - 1) / (F[j] - 1);
			}
		}
		cout << soma << endl;
		F.clear();
	}
	cout << endl;
	return 0;
}
