#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
main(){
    string buff, adr1, adr2;
	char input[256];
	ofstream file1("D://second.txt");
	if(!file1.is_open()){
		cout << "File cannot be opened or readed. Try again";
		return 1;
	}
    for (int i = 0; i < 5; i++){
        cin.getline(input, 256);
        file1 << input << endl;
}
	ifstream file2("D://second.txt");
	ofstream pfile2("D://psecond.txt");
	if(!file1.is_open()){
		cout << "File cannot be opened or readed. Try again";
		return 1;
	}
	while(!file2.eof()){
    getline(file2, buff);
    pfile2 << buff << endl ;                       
 }

    file2.close();
    pfile2.close();
    system("pause");
}
