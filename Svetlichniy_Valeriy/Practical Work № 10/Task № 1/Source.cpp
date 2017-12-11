#include "Windows.h"
#include "iostream"
#include "fstream"
#include "stdio.h"
#include "string"

using namespace std

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 0) | text));
}

void CreateFile()
{
	setlocale(LC_ALL, "English");
	string a;
	SetColor(10, 0);
	cout << "Enter the data you want to write to the file : ";
	SetColor(12, 0);
	ofstream fout("D:/file.txt");
	fout << a << endl;
	cin >> a;
	fout.close();
}

void ReaFile()
{
	string line;
	ifstream fout("D:/file.txt");
	SetColor(10, 0);
	cout << endl << "This information is recorded in a file : " << endl;
	while (!fout.eof())
	{
		getline(fout, line);
		SetColor(12, 0);
		cout << endl << line << endl;
		SetColor(15, 0);
	}
	fout.close();
}

void main()
{
	CreateFile();
	ReaFile();
	system("pause");
}