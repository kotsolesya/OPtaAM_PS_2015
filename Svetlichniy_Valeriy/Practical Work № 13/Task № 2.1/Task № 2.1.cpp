#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	filebuf fb;
	fb.open("D://file.txt", ios::out);
	ostream os(&fb);
	os << "Test_Information \n";
	fb.close();
	system("pause");
	return 0;
}
