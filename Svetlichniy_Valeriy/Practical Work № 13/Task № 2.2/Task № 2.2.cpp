#include "Windows.h"
#include "iostream"
#include "fstream"

using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 0) | text));
}


int main()
{
	filebuf fb;
	if (fb.open("D://file.txt", ios::in))
	{
		istream is(&fb);
		while (is)
		{
			SetColor(10, 0);
			cout << char(is.get());
		}
		fb.close();
	}
	SetColor(7, 0);
	system("pause");
	return 0;
}
