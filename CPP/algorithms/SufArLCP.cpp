//Suffix Array;Longest Common Prefix
//Juan Lopes
#include <iostream>
#include <string.h>
#define MAX 100100
using namespace std;

int RA[MAX], tempRA[MAX];
int SA[MAX], tempSA[MAX];
int C[MAX];
int Phi[MAX], PLCP[MAX], LCP[MAX];

void suffix_sort(int n, int k) {
    memset(C, 0, sizeof C);

    for (int i = 0; i < n; i++)
        C[i + k < n ? RA[i + k] : 0]++;
    /* for (int i = 0; i < n; i++){
        if (i + k < n) C[RA[i + k]]++;
        else C[0]++;         
       }
    */        
    int sum = 0;
    for (int i = 0; i < max(256, n); i++) {
        int t = C[i];
        C[i] = sum;
        sum += t;
    }

    for (int i = 0; i < n; i++)
        tempSA[C[SA[i] + k < n ? RA[SA[i] + k] : 0]++] = SA[i];
    /* for (int i = 0; i < n; i++){
        if (SA[i] + k < n) tempSA[C[RA[SA[i] + k]]++] = SA[i];
        else tempSA[C[0]++] = SA[i];         
       }
    */
    for (int i = 0; i < n; i++) SA[i] = tempSA[i];
}

void suffix_array(string &s) {
    s +="\1";   //sentinela necessária ao algoritmo;
    int n = s.size();
    
    for (int i = 0; i < n; i++)
        RA[i] = s[i] - 1;

    for (int i = 0; i < n; i++)
        SA[i] = i;

    for (int k = 1; k < n; k *= 2) {
        suffix_sort(n, k);
        suffix_sort(n, 0);

        int r = tempRA[SA[0]] = 0;
        for (int i = 1; i < n; i++) {
            int s1 = SA[i], s2 = SA[i-1];
            bool equal = true;
            equal &= RA[s1] == RA[s2];
            equal &= RA[s1+k] == RA[s2+k];
            
            tempRA[SA[i]] = equal ? r : ++r;
        }
        for (int i = 0; i < n; i++) RA[i] = tempRA[i];
    }
}

void lcp(string &s) {
    int n = s.size();

    Phi[SA[0]] = -1;
    for (int i = 1; i < n; i++)
        Phi[SA[i]] = SA[i-1];
    
    int L = 0;
    for (int i = 0; i < n; i++) {
        if (Phi[i] == -1) {
            PLCP[i] = 0;
            continue;
        }
        while (s[i + L] == s[Phi[i] + L])
            L++;

        PLCP[i] = L;
        L = max(L-1, 0);
    }
    
    for (int i = 1; i < n; i++)
        LCP[i] = PLCP[SA[i]];
}

int main() {
    string a, b, s;
    while(true) {
        getline(cin, s);
        suffix_array(s);
        lcp(s);
        for (int i = 0; i< s.length(); i++)
            cout << SA[i]<<" ";  
        cout <<endl;
        for (int i = 0; i< s.length(); i++)
            cout << LCP[i]<<" ";  
        cout <<endl;         
    }     
}
