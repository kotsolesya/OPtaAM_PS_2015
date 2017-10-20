#include <stdio.h>
 #include<iostream>
 #include<string.h>
 #include<cstdlib> 
 #include <fstream>
 const int N=4;
 using namespace std;
 struct Tpochta{
 char namehuman[100];
 char lastname[100];
 char email[100];
 char password[30];
 }human;
 
 
 char  createFile_addFieldToFile(char *name)
 {ofstream vvod_from_file(name, ios_base::app);
 cout<<"Vvedite name (char)"<<"=";
 cin>>human.namehuman;
 cout<<"Vvedite lastname(char)"<<"=";
 cin>>human.lastname;
 cout<<"Vvedite email(char)"<<"=";
 cin>>human.email;
 cout<<"Vvedite password(char)"<<"=";
 cin>>human.password;
 vvod_from_file<<"human.namehuman "<<human.namehuman<<";"<<endl;
 vvod_from_file<<"human.lastname "<<human.lastname<<";"<<endl;
 vvod_from_file<<"human.email "<<human.email<<";"<<endl;
 vvod_from_file<<"human.password "<<human.password<<";"<<endl;
 cout<<"End createFile()"<<endl;
 vvod_from_file.close();
}
 
 char  validEmai(char *name)
 {ofstream vvod_from_file(name, ios_base::app);
 	char str[] = "adress@domen.su";
 bool valid = true;
 int all_presents = 0;
 std::string suitable_symbols = "-_.@"; // допустимые символы помимо латинских букв и цифр
 for(int i = 0;str[i] != '\0'; i++){
     if( !isalpha(str[i]) && !isdigit(str[i]) && suitable_symbols.find(str[i]) == std::string::npos){ // наличие недопустимого символа
         valid = false; break;
     }
     if(i > 0 && str[i] == '.' && str[i - 1] == '.') { valid = false; break; } // две точки подряд
     else if(i > 0 && str[i] == '@' && !all_presents) { all_presents = 1; } // наличие @
     else if(str[i] == '@' && all_presents) { valid = false; break; } // наличие двух @ в строчке
     else if(isalpha(str[i]) && isdigit(str[i]) && all_presents == 1) { all_presents = 2; } // наличие буквы или цифры после @
     else if(str[i] == '.' && all_presents == 2) { all_presents = 3; } // наличие точки после символа( который после @ )
     else if(isalpha(str[i]) && all_presents == 3 && str[i + 1] == '\0') { all_presents = 4; } // наличие буквы в конце строчки
 }
 if(valid && all_presents == 4) { cout << "adress is valid and contains all the needed parts."; }
 }
 
 

 main(){
 createFile_addFieldToFile("Dani.csv");
 
 
 
        system("pause");
        return 0;
        }
