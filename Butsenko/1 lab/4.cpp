#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	char a[255], b[255], c[255];
	cout << "����� ����� : ";
	cin.getline(a, 255);
	cout << "����� ����� : ";
	cin.getline(b, 255);
	cout << "���� ����� : ";
	cin.getline(c, 255);
    cout << a << " " << b << " " << c << endl;
    cout << "������i� � 1 ����i: " << strlen(a) << endl;
    cout << "������i� � 2 ����i: " << strlen(b) << endl;
    cout << "������i� � 3 ����i: " << strlen(c) << endl;
	system("pause");

}
