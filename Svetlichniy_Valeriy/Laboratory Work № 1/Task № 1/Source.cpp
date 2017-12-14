#include "iostream"

using namespace std;

int main()
{
	char a, b, c;
	setlocale(LC_ALL, "RUssian");
	cout << "Введите первое значение : " << endl;
	cin >> a;
	cout << "Введите второе значение : " << endl;
	cin >> b;
	cout << "Введите третье значение : " << endl;
	cin >> c;
	if (isdigit(a))
	{
		if (isdigit(b))
		{
			if (isdigit(c))
			{
				cout << "Выражение трех символов является числом : "<< a << b << c << endl;
			}
			else
			{
				cout << "Третий символ не является числом " << endl;
			}
		}
		else
		{
			cout << "Второй символ не является числом " << endl;
		}
	}
	else
	{
		cout << "Первый символ не является числом " << endl;
	}
	system("pause");
}