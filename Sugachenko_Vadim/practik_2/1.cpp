#include "iostream"

using namespace std;

void PIB(string a = "��� : �����",  string b = "������� : ���������" ,  string c = "����������� ��� : 4.0")
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	
}

int main()
{
	setlocale(LC_ALL,"Russian");
	string a;
	cout << "���������� � �������� : " << endl << endl;
	PIB();
	cout << "" << endl;
	system("pause");
}
