#include<iostream>
#include<math.h>
/*3.6.	Скласти програму, в результаті якої величина а змінюється значенням з величиною b, 
а величина c - з величиною d. (Визначити процедуру, яка здійснює обмін значеннями двох змінних величин.)
*/
using namespace std;
void func_polosa(int a,int b,int c,int d)
{a= b;
cout<<b;
c= d;
cout<<d;
      }
main(){
int a,b,c,d;
cout<<"Vedite a b c d"<<endl;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cout<<func_polosa(a,b,c,d)<<endl;
system("pause");
return 0;
       }
