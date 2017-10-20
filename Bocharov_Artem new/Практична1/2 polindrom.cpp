#include<iostream>
#include<conio.h>
using namespace std;
int func_polindrom(int n)
{
int a,b,temp=0;// POLINDROM CHITAYETSYA Z PRAVA NA LEVO
cin>>n;
b=n;
while(n>0)
{          a=n%10;
           n=n/10;
           temp=temp*10+a;
}
if(temp==b) cout<<"Palindrome";
else cout<<"Not Palindrome";
}

main () {
     int x1,x2;
     cout<<"Vvedite 2 chisla"<<endl;
     func_polindrom(x1);
     cout<<endl;
     func_polindrom(x2);
     cout<<func_polindrom(x1);
     cout<<func_polindrom(x2);
     system("pause");
     return 0 ;
}
