#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib> // DLYA 5 11 robit
#include <regex>
using namespace std;
regex regular("([\\w-]+)""(@)""([\\w-]+)""(\.)""([a-z]{2,5})");
struct TUser {
      string Name;
      string Lastname;
      string email;
      string password;
      }; 
void createFile(){
      ofstream file("D://file.csv");
	  file << "Name" << ";" << "Lastname" << ";" << "Email" << ";" << "Password" << endl;
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
void addFieldToFile(TUser man){
      ofstream file("D://file.csv", ios_base::app);
      file << man.Name << ";" << man.Lastname << ";" << man.email << ";" << man.password << endl;
      file.close();         
}
bool validEmail(string email){
	if(regex_match(email.c_str(), regular))
		return true;
	else 
		return false;
}
main (){
     TUser guy;
     string email;
     int n;
     cout << "How many users you want to add? ";
     cin >> n;
     for(int i = 1; i <= n; i++){
     cout << "Write name of " << i << " user: ";
     cin >> guy.Name;
     cout << "Write lastname of " << i << " user: ";
     cin >> guy.Lastname;
     while(true){
     cout << "Write email of " << i << " user: ";  
     cin >> email;
     if(validEmail(email)){
     	guy.email = email;
     	break;
     }
 }
     
     cout << "Write password of " << i << " user: ";
     cin >> guy.password;
	 addFieldToFile(guy);
 }
 //SPAISBO BIDOCHKE 
	 readFile();
     system("pause");     
}
