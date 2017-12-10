#include "Windows.h"
#include "iostream"
#include "fstream"
#include "string"


using namespace std;

void CreateFile()
{
	string a;
	cin >> a;
	ofstream fout("D:/FiLe.txt");
	fout << a << endl;
	fout.close();
}

void AddFile()
{
	string line;
	ifstream fout("D:/FiLe.txt");
	ofstream fout1("D:/FiLe2.txt");
	while (!fout.eof())
	{
		getline(fout, line);
		fout1 << line << endl;
	}
	fout.close();
}

void main()
{
	CreateFile();
	AddFile();
	system("pause");
}