#include <Windows.h>
#include <>iostream>
#include <cstdlib>
using namespace std;
int main()
{
	float a, b;
	a = 0.001234567;
	b = 1.944e9;
	cout.flags(ios::scientific);
	cout << a << "  " << b << endl;
	return 0;
	system("pause");
}
