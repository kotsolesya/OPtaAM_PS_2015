#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	char a[255], b[255], c[255];
	cout << "Перше слово : ";
	cin.getline(a, 255);
	cout << "Друге слово : ";
	cin.getline(b, 255);
	cout << "Третє слово : ";
	cin.getline(c, 255);
    cout << a << " " << b << " " << c << endl;
    cout << "Символiв у 1 словi: " << strlen(a) << endl;
    cout << "Символiв у 2 словi: " << strlen(b) << endl;
    cout << "Символiв у 3 словi: " << strlen(c) << endl;
	system("pause");

}
