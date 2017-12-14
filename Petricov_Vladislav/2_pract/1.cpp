#include "iostream"

using namespace std;

void PIB(string a = "Фамилия : Петриков",  string b = "Имя : Владислав" ,  string c = "Рейтинговый бал : 4.0")
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	
}

int main()
{
	setlocale(LC_ALL,"Russian");
	string a;
	cout << "Информация о студенте : " << endl << endl;
	PIB();
	cout << "" << endl;
	system("pause");
}
