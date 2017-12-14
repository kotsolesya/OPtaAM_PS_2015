#include "iostream"
#include "string"

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	char str[20];
	int ctr = 0;
	cout << "Введите строку : " << endl;
	cin.getline ( str,20);
	int l ;
	l= strlen(str);
	for (int i = 0; i < l; ++i)
	{
		if (str[i] == ' ')
		{
			ctr++;
		}
	}
	cout << "Колличество пробелов : " << ctr << endl;
	return 0;
}
