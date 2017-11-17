#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
using namespace std;
int createFile(char *path){
    ofstream file(path);
	if(!file.is_open()){
		cout << "File cannot be opened or readed";
		return 1;
	}
    file.close();
	return 0;         
}
void readFile(char *path){
      string buff;
      ifstream file(path);
      while(!file.eof()){
      getline(file, buff);
      cout << buff << endl;
      }
      file.close();         
}
void addFieldToFile(char *path, char *buff, char *buff1, char *buff2){
      ofstream file(path, ios_base::app);
      file << buff << endl;
      file << buff1 << endl;
      file << buff2 << endl;
      file.close();         
}
main (){
	char firstpath[] = "1.txt";
	char secondpath[] = "1.1.txt";
	createFile(firstpath);
	createFile(secondpath);
	char first[256], second[256], third[256];
	cin.getline(first, 256);
	cin.getline(second, 256);
	cin.getline(third, 256);
	addFieldToFile(firstpath, first, second, third);
	addFieldToFile(secondpath, third, second, first);
	readFile(firstpath);
	readFile(secondpath);
    system("pause");     
}
