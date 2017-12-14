+#include <iostream>
 +#include <fstream>
#include <string.h>
#include <cstdlib>
using namespace std;

void createFile(){
      ofstream file("B://file.csv");
	  file << "Ryadok 1" << ";" << endl;
      file << "Ryadok 2" << ";" << endl;
      file.close();         
}
void createFileCopy(){
      ofstream file("B://fileCopy.csv");
	  file << "Ryadok 2" << ";" << endl;
      file << "Ryadok 1" << ";" << endl;
      file.close();         
}
void readFileCopy(){
      string buff;
      ifstream file("B://fileCopy.csv");
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
