#include "iostream"
#include "string.h"

using namespace std;

int main()
{
	char a[9] = "rocesorp";
	char a1[9];
	a1[0] = a[7];
	for (int i = 0; i < 8; i++)
	{
		a1[i + 1] = a[i];
	}
	for (int i = 0; i < 8; i++)
	{
		cout << a1[i];
	}
	cout << endl;
	system("pause");
}