#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
 using namespace std;
 struct data
 {
   char Name[30];
   char LastName[30];
   char email[40];
   char password[16];
 };
 data dat;
 void creadFile(){
 	cout << "Cin Name: "<<endl;
 	cin.getline(dat.Name,30);
 	cout << "Cin Last Name: "<<endl;
 	cin.getline(dat.LastName,30);
 	cout << "Cin email: "<<endl;
 	cin.getline(dat.email,30);
 	cout << "Cin password: "<<endl;
 	cin.getline(dat.password,30);
 }
 void readFile(){
ifstream fileRead("prakt_9.csv");
char buff[255];
fileRead.getline(buff,255);
cout<<buff<< endl;
fileRead.close();
 }
void addFiledToFile(){
	
}
int main ()
{
ofstream fileOut("prakt_9.csv");
fileOut << "hello jgjhghj";
fileOut.close();

//char nameFile[20];
//cin>>nameFile;




}