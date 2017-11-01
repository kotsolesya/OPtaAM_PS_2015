#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
main(){
    string buff;
    int a;
	ifstream file("D://digits.txt");
	if(!file.is_open()){
		cout << "File cannot be opened or readed. Try again";
		return 1;
	}
	while(!file.eof()){
    getline(file, buff);
    cout << buff << endl;
    a = atoi(buff.c_str());
    if(a >= 0){
         ofstream file1("D:/8.3/1.txt");
         file1 << a << endl;
         file1.close();
         }                  
 }
    file.close();
    system("pause");
}
