#include "Windows.h"
#include "iostream"

using namespace std;


int main()
{
	setlocale(0, "rus");
	int n; 
	cout << "������� ����������� ������� : ";
	cin >> n;
	cout << "������ : ";
	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << "�������������� ������ : ";
	for (int i = 1; i <= n; i++)
	{
		if (i & 1)
		{
			cout << i << " ";
		}
	}
	for (int i = (n+2) - 1; i >= 1; i--)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl << endl;
	system("pause");
}
