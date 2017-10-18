#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<cstdlib> // dlya fynk  strtol
using namespace std;
const int N =2;
const int N2 =4;
struct Tfullname{
       char Prizv[100];
       char Imya[100];
       char Pob[100];
       };
       
struct Tstudent{
       Tfullname a;
       int math[N2];       
       };
        
main(){ 
        srand(time(NULL));
        Tstudent student[N];
        
        /*cin>>student[0].a.Imya;

            for (int i =0;i<N;i++)}
        student[0].math[0]=5;
        student[0].math[1]=5;
        student[0].math[2]=5;
        student[0].math[3]=5;*/
  
for (int i =0;i<N;i++)
{cout<<"Vedit Prizv:";
    cin>>student[i].a.Imya;
    cout<<"Vedit Imya:";
    cin>>student[i].a.Pob;
    cout<<"Vedit Pob:";
    cin>>student[i].a.Prizv;
    for (int j =0;j<N2;j++){
        student[i].math[j]=rand()%5+1; }
}
for (int i =0;i<N;i++)
{cout<<student[i].a.Imya<<"   ";
    cout<<student[i].a.Pob<<"   ";;
    cout<<student[i].a.Prizv<<"   ";;
 
    
    for (int j =0;j<N2;j++){
        cout<<student[i].math[j]<<" "; 
           }cout<<endl;
}
           system("pause");
       return 0;
       
       
       }
