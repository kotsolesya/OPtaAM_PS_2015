/*zadanie
1.	��������������� ������ ������� strtol �� ������� ������numbers (������� ����� ������� ������ �������� �� �������)
charnumbers[] = "2001 60c0c0 -11011101001101110010100000 0x6fafdc";
*/
#include<iostream>
#include<string.h>
#include<cstdlib> // dlya fynk  strtol
using namespace std;
const int N =5;
struct Tmachine{
       char Prizv[100];
       char Imya[100];
       char Pob[100];
       int bagaj_vaga; //bagaj_vaga[100] - OIIIubka
       int bagaj_kilbkistb;
       };
main(){ 
        int sum = 0;
        Tmachine transport[5];
for (int i =0;i<N;i++)
{cout<<"Vedit Prizv:";
    cin>>transport[i].Prizv;
    cout<<"Vedit Imya:";
    cin>>transport[i].Imya;
    cout<<"Vedit Pob:";
    cin>>transport[i].Pob;
    cout<<"Vedit vaga:";
    cin>>transport[i].bagaj_vaga;
    cout<<"Vedit kiLbkistb:";
    cin>>transport[i].bagaj_kilbkistb;
    }
    /*
for (int i =0;i<N;i++)
{ cout<<transport[i].PIB<<endl;
  cout<<transport[i].bagaj_vaga<<endl;
  cout<<transport[i].bagaj_kilbkistb<<endl;
    }
*/
    cout<<"Vaga biLbIII,e 30="<<endl;
    for (int i =0;i<N;i++)
{ if(transport[i].bagaj_vaga>30){ 

  cout<<transport[i].Prizv<<endl;
  cout<<transport[i].bagaj_vaga<<endl;
  cout<<transport[i].bagaj_kilbkistb<<endl;
  cout<<"ZagaLbna kiLbkistb =";
  sum+=transport[i].bagaj_kilbkistb;}}
    
    
           system("pause");
       return 0;
       
       
       }
