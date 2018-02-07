#include <Windows.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	filebuf fb;
	if (fb.open("E://file.txt", ios::in))
	{
		istream is(&fb);
		while (is)
		{
			cout << char(is.get());
		}
		fb.close();
	}
	system("pause");
	return 0;
}
