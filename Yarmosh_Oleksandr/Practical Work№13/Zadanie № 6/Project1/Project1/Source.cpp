#include <Windows.h>
#include <iostream>
#include <cstdlib>
#include <istream>
using namespace std;
int main()
{
	char c;
	int a;
	cout << "Enter letter:" << endl;
	cin >> c;
	cin.ignore();
	cout << "Now number: " << endl;
	cin >> a;
	cout << "Enter: " << endl;
	cout << c << "&" << a << endl;
	return 0;
	system("pause");
}
