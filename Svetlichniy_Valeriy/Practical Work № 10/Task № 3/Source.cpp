#include "Windows.h"
#include "iostream"
#include "fstream"
#include "string"
#include "time.h"
#include "stdlib.h"

using namespace std;

#define _rand(min, max) ( rand() % ((max) - (min) + 1) + (min) )


void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 0) | text));
}

void FRand()
{
	srand(time(NULL));
	ofstream fout("D:/num.txt");
	int j;
	int chars[9];
	for (int i = 1, n = 0; i <= 9; ++i, ++n)
	{
		chars[n] = (int)i;
	}
	SetColor(10, 0);
	cout << "Enter the number of characters that will be generated : " << endl << endl;
	SetColor(11, 0);
	cin >> j;
	SetColor(10, 0);
	cout << endl << "Massive random numbers : " << endl << endl;
	SetColor(12, 0);
	for (int i = 0; i < j; ++i)
	{
		cout << chars[_rand(0, 8)] << " ";
		fout << chars[_rand(0, 8)] << " ";
	}
	SetColor(10, 0);
	cout << endl << endl << "This mask will be written to the file (num.txt) located along the path D : / " << endl << endl;
	SetColor(15, 0);
	fout.close();
}

void FDil()
{
	string line;
	ifstream fout("D:/num.txt");
	int n;
	while (!fout.eof())
	{
		getline(fout, line);
		cout << line << endl;
		n = atoi(line.c_str());
		if (n % 3 == 0)
		{
			cout << "Numbers multiples of 3 : " << endl;
			char b = strlen(n);
			cout << n << " ";
		}
	}
	fout.close();
}

void main()
{
	FRand();
	FDil();
	system("pause");
}