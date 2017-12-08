#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib> 
using namespace std;

void createFile(){
      ofstream file("B://file.csv");
	  file << "String" << endl;
      file.close();         
}
void readFile(){
      string buff;
      ifstream file("B://file.csv");
      while(!file.eof()){
      getline(file, buff);
      cout << buff << endl;
      }
      file.close();         
}
main (){
     createFile();
	 readFile();
     system("pause");     
}
