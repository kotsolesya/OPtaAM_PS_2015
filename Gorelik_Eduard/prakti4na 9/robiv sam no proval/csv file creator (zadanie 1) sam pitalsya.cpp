
#include<iostream>
#include<string.h>
#include<cstdlib> // dlya fynk  strtol
#include <fstream>
using namespace std;
const int N =3;
const int N2 =3;
struct Tpochta{
char name1[100];
char lastname[100];
char email[100];
char password[30];
}human[N];


char  createFile(char *name)
{ofstream vvod_from_file(name);
for (int i =0;i<N;i++){
    for (int j =0;j<N2;j++){cout<<"Vvedite name (char)"<<"=";
cin>>human[N][N2].name;
cout<<"Vvedite lastname(char)"<<"=";
cin>>human[N][N2].lastname;
cout<<"Vvedite email(char)"<<"=";
cin>>human[N][N2].email;
cout<<"Vvedite password(char)"<<"=";
cin>>human[N][N2].password;}
for (int i =0;i<N;i++){
    for (int j =0;j<N;j++){vvod_from_file<<human[N][N2].name;
vvod_from_file<<human[N][N2].lastname;
vvod_from_file<<human[N][N2].email;
vvod_from_file<<human[N][N2].password;}
}
vvod_from_file.close ();}}

main(){
createFile("test.csv");



       system("pause");
       return 0;
       }
