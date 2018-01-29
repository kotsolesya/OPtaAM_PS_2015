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
	setlocale(LC_ALL,"Russian");
	cout << "Среднее значение чисел (5,3,9,1,7) : " << endl;
	srarf(5,5,3,9,1,7);
}

