#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib> // DLYA 5 11 robit
using namespace std;

void createFile(){
      ofstream file("D://file.csv");
	  file << "Ryadok 1" << ";" << "Ryadok 2" << ";" << endl;
      file.close();         
}
void readFile(){
      string buff;
      ifstream file("D://file.csv");
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
