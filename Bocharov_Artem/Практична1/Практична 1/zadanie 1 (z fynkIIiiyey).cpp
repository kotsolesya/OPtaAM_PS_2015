#include<iostream>
#include<math.h>
/*1.	Знайти значення z = min(a, 3b) * min(2a-b, 2b), де min(х, у) - мінімальне із чисел х, у. Вирішити завдання двома спрособами:
a.	не використовуючи функцію min;
b.	оголосити і використати функцію min.
*/
using namespace std;
float min(float a, float b)
{
      if(a>b){return b;}
      else{return a;}
      }
main(){
float x,y,z;
cin>>x;
cin>>y;
z=min(x,3*y)+min(2*x-y, 2*y);

cout<<z<<endl;

//cout<<float min( a, 3b)<<endl;
system("pause");
       }
