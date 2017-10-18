#include<iostream>
#include<math.h>
/*1.	Знайти значення z = min(a, 3b) * min(2a-b, 2b), де min(х, у) - мінімальне із чисел х, у. Вирішити завдання двома спрособами:
a.	не використовуючи функцію min;
b.	оголосити і використати функцію min.
*/
using namespace std;
main(){
float z,a,b;
cout<<"Vedite a i b"<<endl;
cin>>a;
cin>>b;
if(a<b){z=a*(2a-b);}
else if(a>b){z=3b*2b;}
cout<<z<<endl;
       }
