#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <regex>

using namespace std;

regex regular("([\\w-]+)""(@)""([\\w-]+)""(\.)""([a-z]{2,5})");
char path[] = "1.csv";
struct TUser {
      string Name;
      string Lastname;
      string email;
      string password;
      }; 
void createFile()
{
      ofstream file(path, ios::binary);
	  file << "Name" << ";" << "Lastname" << ";" << "Email" << ";" << "Password" << endl;
      file.close();         
}
void readFile()
{
      string buff;
      ifstream file(path, ios::binary | ios::in);
      while(!file.eof())
	  {
      getline(file, buff);
      cout << buff << endl;
      }
      file.close();         
}
void addFieldToFile(TUser man)
{
      ofstream file(path, ios::binary | ios::app);
      file << man.Name << ";" << man.Lastname << ";" << man.email << ";" << man.password << endl;
      file.close();         
}
bool validEmail(string email)
{
	if(regex_match(email.c_str(), regular))
		return true;
	else 
		return false;
}
int main ()
{
     TUser guy;
     createFile();
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
	 readFile();
     system("pause");     
}
