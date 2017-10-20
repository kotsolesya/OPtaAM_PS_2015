#include<iostream>
#include<math.h>
/*	5.	Дано два натуральних числа. З'ясувати, в якому з них сума цифр більша. (Визначити функцію для розрахунку суми цифр натурального числа.)
*/
using namespace std;
int func_porovnyalka_2_pros_chisel(int a, int b)
{int z;
  if (a/10+a%10>b/10+b%10) a = z; return z;
  if (a/10+a%10>b/10+b%10) b = z; return z;
      }
main(){
int chislo1,chislo2 ;
cout<<"Dva dvoznachnih prostih 4isla"<<endl;
cin>>chislo1;
cin>>chislo2;
if(chislo1>=100 || chislo2>=100){cout<<"DVOZNACHNIH_PROSTIH_CHISLA"<<endl; return 0;}
cout<<int func_porovnyalka_2_pros_chisel(chislo1,chislo2);
system("pause");
return 0;
       }
