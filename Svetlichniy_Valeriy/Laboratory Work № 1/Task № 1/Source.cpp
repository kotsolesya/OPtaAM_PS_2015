#include "iostream"

using namespace std;

int main()
{
	char a, b, c;
	setlocale(LC_ALL, "RUssian");
	cout << "������� ������ �������� : " << endl;
	cin >> a;
	cout << "������� ������ �������� : " << endl;
	cin >> b;
	cout << "������� ������ �������� : " << endl;
	cin >> c;
	if (isdigit(a))
	{
		if (isdigit(b))
		{
			if (isdigit(c))
			{
				cout << "��������� ���� �������� �������� ������ : "<< a << b << c << endl;
			}
			else
			{
				cout << "������ ������ �� �������� ������ " << endl;
			}
		}
		else
		{
			cout << "������ ������ �� �������� ������ " << endl;
		}
	}
	else
	{
		cout << "������ ������ �� �������� ������ " << endl;
	}
	system("pause");
}