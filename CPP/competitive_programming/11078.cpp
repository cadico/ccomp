#include <iostream>
int T[100001], n, montante, maxs;
using namespace std;

void SAC()
{
    maxs = max(T[1], T[2]);
    montante = T[1] - T[2];
    for(int i = 3; i <= n; i++)
    {
        if((maxs - T[i]) > montante)
            montante = maxs - T[i];
        if(T[i] > maxs)
            maxs = T[i];

    }
}

int main()
{
    int t, x;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        for(int j = 1; j <= n; j++)
        {
            cin >> x;
            T[j] = x;
        }
        SAC();
        cout << montante << endl;
    }
    return 0;
}