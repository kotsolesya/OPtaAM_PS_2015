#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	filebuf fb;
	if (fb.open("D://file.txt", ios::in))
	{
		istream is(&fb);
		while (is)
		{
			cout << char(is.get());
		}
		fb.close();
	}
	system("pause");
}
