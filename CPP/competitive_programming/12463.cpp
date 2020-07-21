#include <iostream>

using namespace std;

int main(void){
	int a, b, c, d, e;
	while(cin >> a >> b >> c >> d >> e){
		if(a == 0 && b == 0 && c == 0 && d == 0 && e == 0) break;
		cout << a * b * c * d * d * e * e << endl;
	}	
	
	return 0;
}
