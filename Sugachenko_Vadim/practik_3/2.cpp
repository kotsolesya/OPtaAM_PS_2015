#include "iostream"
#include "string.h"

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	char all[100];
	cout << "������� ������� ��� �������� : " << endl;
	cin.getline (all,100);
	int b;
	b = strlen(all);
	cout << "������� : " << b << " ������. " << endl;
	system("pause");
}

