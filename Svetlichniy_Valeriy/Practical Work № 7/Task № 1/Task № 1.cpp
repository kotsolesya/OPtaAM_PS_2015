﻿#include "fstream"
#include "iostream"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[5];
	ofstream fout("D:/numbers.txt ");
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		fout << a[i] << endl;
	}
	fout.close();
	system("pause");
	return 0;
}