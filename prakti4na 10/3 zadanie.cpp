#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib> // DLYA 5 11 robit
#include <algorithm>    // std::all_of
using namespace std;

void createFile(){
     char a;
      ofstream file("D://numbers_for_3_zadanie.csv");
	  file << "1,2,3,4,5,7,8,235,4215,4246,26,2356,235";
      file.close();         
}      
bool is_digits(const std::string &str)
{
    return all_of(str.begin(), str.end(), ::isdigit); // C++11
}
int readFile(){
      string buff;
      fstream file("D://numbers_for_3_zadanie.csv");
if (!file) {
cout << "Cannot open file.\n";}
      while(!file.eof()){               
      getline(file, buff);
      if(is_digits(buff)%3==0){
                             cout <<buff<< endl;}
                             }
      file.close();         
}

main (){
     createFile();
     readFile();
     system("pause");     
}
