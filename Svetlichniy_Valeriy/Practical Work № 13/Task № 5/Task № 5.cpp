#include "Windows.h"
#include "iostream"
#include "cstdlib"

using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 0) | text));
}


int main()
{
	float a, b;
	a = 0.001234567;
	b = 1.944e9;
	cout.flags(ios::scientific);
	SetColor(10, 0);
	cout << a << "  " << b << endl;
	SetColor(7, 0);
	system("pause");
}
