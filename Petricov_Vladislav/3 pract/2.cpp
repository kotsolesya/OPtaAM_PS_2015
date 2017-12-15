#include "iostream"
#include "string.h"

using namespace std;

int main()
{
	char all[100];
	cout << "enter symbols for counting: " << endl;
	cin.getline (all,100);
	int b;
	b = strlen(all);
	cout << "introduced : " << b << " symbols. " << endl;
	system("pause");
}

