#include "iostream"
#include "string.h"

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	char a[100];
	cout << "������� ����� : " << endl;
	cin.getline (a,100);
	int i = 0;	
	i = strlen(a);
	cout << "������������ ����� :" << endl;
	for(i;i>=0;--i)
	{
		cout  << a[i];
	}
	cout << endl;
	system("pause");
}
