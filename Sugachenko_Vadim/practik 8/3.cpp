#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;
main(){
    string buff;
    int a, i = 0;
	ifstream file("D://digits.txt");
    ofstream file1("D:/1.txt");
	ofstream file2("D:/2.txt");
	ofstream file4("D:/4.txt");		
	if(!file.is_open()){
		cout << "File cannot be opened or readed. Try again";
		return 1;
	}
	while(!file.eof()){
    getline(file, buff);
    if(buff.length() != 0){
    a = atoi(buff.c_str());
    cout << a << endl;
    if(a > 0){
         file1 << a << endl;
         }
    if(a < 0){
         file2 << a << endl;
         }
    if(a % 2 == 0){
         file4 << a << endl;
         } 
	}	                 
}
	file4.close();
	file2.close();
 	file1.close();
    file.close();
    system("pause");
}
