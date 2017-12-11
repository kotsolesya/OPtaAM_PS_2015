#include "Windows.h"
#include "iostream"

using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 0) | text));
}


int main() 
{
	int a;
	SetColor(10, 0);
	cin >> a;
	SetColor(12, 0);
	cout.width(6); 
	cout << left << a << endl; 
	cout.width(6); 
	cout << right << a << endl;
	SetColor(7, 0);
	system("pause");
	return 0;
}
