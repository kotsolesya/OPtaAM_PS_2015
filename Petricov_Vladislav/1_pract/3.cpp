#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
double Ptriangel(int x1, int y1, int x2, int y2, int x3, int y3)
{
	double ax, ay, bx, by, cx, cy, a, b, c, P;
	ax=x2-x1;
	ay=y2-y1;
	bx=x3-x2;
	by=y3-y2;
	cx=x1-x3;
	cy=y1-y3;
	a=pow(ax,2)+pow(ay,2);
	a=sqrt(a);
	cout << "a=" << a << endl;
	b=pow(bx,2)+pow(by,2);
	b=sqrt(b);
	cout << "b=" << b << endl;
	c=pow(cx,2)+pow(cy,2);
	c=sqrt(c);
	cout << "c=" << c << endl;
	P=a+b+c;
	return P;
}

int main()
{
	int x1, x2, x3, y1, y2, y3;
	cout << "Enter x1 - ";
	cin >> x1;
	cout << "Enter y1 - ";
	cin >> y1;
	cout << "Enter x2 - ";
	cin >> x2;
	cout << "Enter y2 - ";
	cin >> y2;
	cout << "Enter x3 - ";
	cin >> x3;
	cout << "Enter y3 - ";
	cin >> y3;
	cout << "P = " << Ptriangel(x1,y1,x2,y2,x3,y3)<< endl << endl;
	system ("pause");
}
