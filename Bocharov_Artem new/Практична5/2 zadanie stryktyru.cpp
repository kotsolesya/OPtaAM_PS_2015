/*zadanie
1.	��������������� ������ ������� strtol �� ������� ������numbers (������� ����� ������� ������ �������� �� �������)
charnumbers[] = "2001 60c0c0 -11011101001101110010100000 0x6fafdc";
*/
#include<iostream>
#include<string.h>
#include<cstdlib> // dlya fynk  strtol
using namespace std;
const int N =5;
struct Tshkolyariki{
       char Prizv[100];
       char Imya[100];
       char Pob[100];
       };
       struct Tocinki{
       int math[4];
       Tshkolyariki a;
       };
        
main(){ 
        Tshkolyariki student[5];
  /*      
for (int i =0;i<N;i++)
{cout<<"Vedit Prizv:";
    cin>>student[i].Prizv;
    cout<<"Vedit Imya:";
    cin>>student[i].Imya;
    cout<<"Vedit Pob:";
    cin>>student[i].Pob;
}
*/

{
    int i = -1, a[3];
    while ((++i) < 4)
    cin>> a[i] ;
}

{
    int i = -1, a[3];
    while ((++i) < 4)
    cout<<a[i]<<endl ;
}



           system("pause");
       return 0;
       
       
       }
