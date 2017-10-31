#include "Windows.h"
#include "iostream"
#include "fstream"
#include "time.h"

using namespace std;

#define _rand(min, max) ( rand() % ((max) - (min) + 1) + (min) )

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 0) | text));
}


int main() 
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	ofstream fout("D:/fout.txt");
	int j;
	char chars[26];
	for (int i = 'a', n = 0; i <= 'z'; ++i, ++n)
	{
		chars[n] = (char)i;
	}
	SetColor(10, 0);
	cout << "Введите количество символов которые будут сгенерированы : " << endl << endl;
	SetColor(11, 0);
	cin >> j;
	SetColor(10, 0);
	cout << endl << "Масив случайных букв латинского алфавита : " << endl << endl;
	SetColor(12, 0);
	for (int i = 0; i < j; ++i)
	{
		cout << chars[_rand(0, 25)] << " ";
		fout << chars[_rand(0, 25)] << " ";
	}
	SetColor(10, 0);
	cout << endl << endl << "Данный масcив будет записан в файл fout.txt находящийся по пути D:/ " << endl << endl;
	SetColor(15, 0);
	system("pause");
	return 0;
}