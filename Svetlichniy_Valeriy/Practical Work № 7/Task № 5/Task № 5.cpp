#include <iostream>
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	char buff[200];
	ifstream fin("D:/fout.txt");
	fin.getline(buff, 200);
	fin.close();
	cout << "Содержимое файла fout.txt: " << buff << endl;
	int count = 0;
	while (fin.eof) 
	{
		if ((int)buff[i] == 'z')
			count++;
	}
	cout << count << endl;
	system("pause");
	return 0;
}
