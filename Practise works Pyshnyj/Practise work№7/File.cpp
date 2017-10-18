#include <iostream>
#include <fstream>
using namespace std;
main(){
	ofstream file1("D://GAMES//types.txt", ios_base::out | ios_base::trunc);
	if(!file1.is_open()){
		cout << "File cannot be opened ro readed";
		return 1;
	}
	file1 << "data type\t\t" << "byte" << endl 
    << "bool\t\t\t" <<  sizeof(bool) << endl
    << "char\t\t\t" << sizeof(char) <<endl
    << "short int\t\t" << sizeof(short int) << endl
    << "unsigned short int\t" << sizeof(unsigned short int) << endl
    << "int \t\t\t" << sizeof(int) << endl
    << "unsigned int\t\t" << sizeof(unsigned int) << endl
    << "long int\t\t" << sizeof(long int) << endl
    << "unsigned long int\t" << sizeof(unsigned long int) << endl
    << "float\t\t\t" << sizeof(float) << endl
    << "double\t\t\t" << sizeof(double) << endl
    << "double\t\t\t" << sizeof(double) << endl;
    file1.close();
    ifstream file2("D://GAMES//types.txt");
    char str[80];
    while(!file2.getline(str, sizeof(str)).eof())
    	cout << str << endl;
    file2.close();
    system("pause");
}
