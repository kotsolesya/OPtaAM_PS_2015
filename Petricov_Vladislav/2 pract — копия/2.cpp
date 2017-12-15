#include <iostream>

using namespace std;

long double srarf(int a , ...)
{
	int *p = &a;
	int b = 0;
	for(; a != 0; a--)
	{
		b+= *(++p);
	}
	int c = b/a;
	return c;
}

int main()
{
	cout << "average value (5,3,9,1,7) : " << srarf(5,3,9,1,7) << endl;

	system("pause");
	return 0;
}
