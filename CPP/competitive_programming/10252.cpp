#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void){
    string A, B;
    int aux[26], aux2[26];
    while(getline(cin, A)){
        getline(cin, B);

        if(A.size() == 0 || B.size() == 0){
            cout << "" << endl;
        }else{
            for(int i = 0; i < 26; i++){
                aux[i] = 0;
                aux2[i] = 0;
            }

            for(int i = 0; i < A.size(); i++){
                aux[A[i]-'a'] += 1; 
            }

            for(int i = 0; i < B.size(); i++){
                aux2[B[i]-'a'] += 1;
            }
                
            for(int i = 0; i < 26; i++){
                for(int j = 0; j < min(aux[i], aux2[i]); j++){
                    printf("%c", i + 'a');
                }
            }
            cout << endl;
        }
    }
    return 0;
}