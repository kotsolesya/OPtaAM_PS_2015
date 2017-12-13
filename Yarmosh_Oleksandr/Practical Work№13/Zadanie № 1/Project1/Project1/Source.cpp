#include <Windows.h>
#include <iostream>
using namespace std;
int main() 
{
	int a;
	cin >> a;
	cout.width(6); 
	cout << left << a << endl; 
	cout.width(6); 
	cout << right << a << endl;
	return 0;
	system("pause");
}
