#include "fstream"
#include "iostream"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char line[50];
	int mass[10];
	int sum = 0; 
	ifstream fin("D:/numbers.txt");
	for (int i = 0; i < 10; i++)
	{
		fin.getline(line, 50);
		cout << line << ", ";
		mass[i] = atol(line);
	}
	long int proz = mass[0];
	for (int i = 0; i < 10; i++)
	{
		sum += mass[i];
		proz *= mass[i];
	}
	cout << endl << "Среднее арифметическое : " << sum/10 << endl;
	cout << "Сумма : " << sum << endl;
	cout << "Произведение : " << proz << endl;
	fin.close();
	system("pause");
}