#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int a;
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
      char buff;
      ifstream file(path);
      while(!file.eof()){
      buff = file.get();
      a = static_cast<int>(buff);
      switch(buff){
      	case '0':
      		cout << "zero" << " ";
      		break;
      	case '1':
      		cout << "one" << " ";
      		break;
      	case '2':
      		cout << "two" << " ";
      		break;
		case '3': 
      		cout << "three" << " ";
      		break;      	
      	case '4': 
      		cout << "four" << " ";
      		break;      		
      	case '5': 
      		cout << "five" << " ";
      		break;
      	case '6': 
      		cout << "six" << " ";
      		break;
      	case '7': 
      		cout << "seven" << " ";
      		break;
      	case '8': 
      		cout << "eight" << " ";
      		break;
      	case '9':
      		cout << "nine" << " ";
      		break;
	  }
	  if(a == '\n')
	  	cout << endl;
      }
      file.close();
}



main (){
	srand(time(NULL));
	char path[] = "2.txt";
	createFile(path);
	writenumbers(path);
	readFile(path);
    system("pause");     
}
