#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
main(){
	string buff;
	ifstream file1("E://numbers.txt");
    ofstream pfile1("E://ptr.txt");
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
    ofstream file2("E://numbers.txt", ios_base::app);
    ifstream newfile("E://string.txt");
	while (!newfile.eof()){
	getline(newfile, buff);
	file2 << buff << endl;
	cout << buff << endl;
	}
	file2.close();
	newfile.close();
    ofstream file("E://string.txt", ios_base::app);
    ifstream newfile1("E://ptr.txt");
	while (!newfile1.eof()){
	getline(newfile1, buff);
	file << buff << endl;
	cout << buff << endl;
	}
	newfile1.close();
	file.close();
    system("pause");
}
