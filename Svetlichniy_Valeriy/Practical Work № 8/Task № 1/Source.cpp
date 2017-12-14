#include "iostream"
#include "fstream"
#include "string"

using namespace std;

main()
{
	setlocale(LC_ALL,"Russian");
	string buff;
	ifstream file1("D://point_one.txt");
    ofstream pfile1("D://point_two");
	if(!file1.is_open())
	{
		cout << "Файл не может быть открыт для чтения";
		return 1;
	}
	while (!file1.eof())
	{
		getline(file1, buff);
		pfile1 << buff << endl;
		cout << buff << endl;
	}
    file1.close();
    pfile1.close();
    ofstream file2("D://point_one.txt", ios_base::app);
    ifstream newfile("D://point_three.txt");
	while (!newfile.eof())
	{
		getline(newfile, buff);
		file2 << buff << endl;
		cout << buff << endl;
	}
	file2.close();
	newfile.close();
    ofstream file("D://point_one.txt", ios_base::app);
    ifstream newfile1("D://point_two.txt");
	while (!newfile1.eof())
	{
		getline(newfile1, buff);
		file << buff << endl;
		cout << buff << endl;
	}
	newfile1.close();
	file.close();
}
