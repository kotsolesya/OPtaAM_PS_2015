#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
main(){
	string buff;
	ifstream file1("D://numbers.txt");
    ofstream pfile1("D://test.txt");
	if(!file1.is_open()){
		cout << "File cannot be opened or readed";
		return 1;
	}
	while (!file1.eof()){
	getline(file1, buff);
	pfile1 << buff << endl;
	cout << buff << endl;
	}
    file1.close();
    pfile1.close();
    ofstream file2("D://numbers.txt", ios_base::app);
    ifstream newfile("D://latin.txt");
	while (!newfile.eof()){
	getline(newfile, buff);
	file2 << buff << endl;
	cout << buff << endl;
	}
	file2.close();
	newfile.close();
    ofstream file("D://latin.txt", ios_base::app);
    ifstream newfile1("D://test.txt");
	while (!newfile1.eof()){
	getline(newfile1, buff);
	file << buff << endl;
	cout << buff << endl;
	}
	newfile1.close();
	file.close();
    system("pause");
}
