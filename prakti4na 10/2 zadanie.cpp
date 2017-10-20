#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib> // DLYA 5 11 robit
using namespace std;

void createFile(){
      ofstream file("D://file.csv");
	  file << "Ryadok 1" << ";" << endl;
      file << "Ryadok 2" << ";" << endl;
      file.close();         
}
void createFileCopy(){
      ofstream file("D://fileCopy.csv");
	  file << "Ryadok 2" << ";" << endl;
      file << "Ryadok 1" << ";" << endl;
      file.close();         
}
void readFileCopy(){
      string buff;
      ifstream file("D://fileCopy.csv");
      while(!file.eof()){
      getline(file, buff);
      cout << buff << endl;
      }
      file.close();         
}
main (){
     createFile();
     createFileCopy();
	 readFileCopy();
     system("pause");     
}
