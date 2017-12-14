#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int a, counter = 0;
int createFile(char *path){
    ofstream file(path);
	if(!file.is_open()){
		cout << "File cannot be opened or readed";
		return 1;
	}
    file.close();
	return 0;         
}
void writenumbers(char *path){
	ofstream file(path);
	for(int i = 0; i < 15; i++){
		file << rand() << endl; 
	}
	file.close();
}
void readFile(char *path){
      string buff;
      ifstream file(path);
      while(!file.eof()){
      getline(file,  buff); 
      if(buff.length()!= 0){
      a = atoi(buff.c_str());
      if(a % 3 == 0){
      	counter++;
      	cout << buff << endl;
	  }
      }
  }
      file.close();         
}


main (){
	srand(time(NULL));
	char path[] = "2.txt";
	createFile(path);
	writenumbers(path);
	readFile(path);
	cout << "The number of digits that is divided on 3 is: " << counter << endl;
    system("pause");     
}
