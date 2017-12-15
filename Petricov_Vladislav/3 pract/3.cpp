#include "iostream"
#include "string.h"

using namespace std;

int main()
{
	char a[100];
	cout << "Enter à word : " << endl;
	cin.getline (a,100);
	int i = 0;	
	i = strlen(a);
	cout << "inverted word :" << endl;
	for(i;i>=0;--i)
	{
		cout  << a[i];
	}
	cout << endl;
	system("pause");
}
