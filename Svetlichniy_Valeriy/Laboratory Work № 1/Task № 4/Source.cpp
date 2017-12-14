#include "iostream"
#include "string.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char a[255], b[255], c[255];
	cout << "Введите три слова через Enter:" << endl;
	cin >> a >> b >> c;
	cout << "В первом слове " << strlen(a) << " символов ; " << "Во втором слове : " << strlen(b) << " символов ; " << " В терем слове : " << strlen(c) << " символов." << endl;
	system("pause");
}
