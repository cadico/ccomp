#include <iostream>
#include <cmath>
using namespace std;

typedef struct {int x, y;}Ponto;
typedef struct {int e, d;}Intervalo;


int tamIntersec(Intervalo i1, Intervalo i2)
{
	if((i1.d < i2.e) || (i2.d < i1.e))
		return -1;
	else
		return (min(i1.d, i2.d) - max(i1.e, i2.e));
}

void verifica(int interx, int intery)
{
	if(interx == -1 || intery == -1)
		cout << "inexistente" << endl;
	else if(interx == 0 || intery == 0)
	{
		if(interx == 0 && intery == 0)
			cout << "ponto" << endl;
		else
			cout << "linha" << endl;
	}
	else if(interx > 0 && intery > 0)
	{
		if((interx * intery) > 10)
			cout << "grande" << endl;
		else
			cout << "adequada" << endl;
	}
}

int main()
{
	Ponto p1, p2;
	Intervalo i1x, i1y, i2x, i2y;
	int X0, Y0, X1, Y1, intersecaox, intersecaoy;
	
	while(cin >> X0 >> Y0 >> X1 >> Y1)
	{
		p1.x = X0; p1.y = Y0;
		p2.x = X1; p2.y = Y1;
		i1x.e = min(p1.x, p2.x); i1x.d = max(p1.x, p2.x);
		i1y.e = min(p1.y, p2.y); i1y.d = max(p1.y, p2.y);
		cin >> X0 >> Y0 >> X1 >> Y1;
		p1.x = X0; p1.y = Y0;
		p2.x = X1; p2.y = Y1;
		i2x.e = min(p1.x, p2.x); i2x.d = max(p1.x, p2.x);
		i2y.e = min(p1.y, p2.y); i2y.d = max(p1.y, p2.y);
		intersecaox = tamIntersec(i1x, i2x);
		intersecaoy = tamIntersec(i1y, i2y);
		verifica(intersecaox, intersecaoy);
	}
	return 0;
}
