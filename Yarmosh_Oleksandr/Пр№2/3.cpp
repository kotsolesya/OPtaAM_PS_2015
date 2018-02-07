#include<iostream>
#include<conio.h>
#define N 8 //директива сакроса
using namespace std;
int main()
{ 
	setlocale(LC_ALL, "Russian");
	int a[8],i,min,j,t,r,z;
 cout<<"Введите значения масива(8)\n";
 for(i=0;i<N;i++)
 cin>>a[i];
 for(i=0;i<N;i++)
 {
  min=a[i];
  z=0;
  for(j=i+1;j<N;j++)
  {
   if(min>a[j])
   {
   min=a[j];t=j;z++;
   }
  }
   if(z==0) continue;
  r=a[i];
  a[i]=min;
  a[t]=r;
 }
 for(i=0;i<N;i++)
 cout<<a[i]<<" ";
 getch();
 return 0;
 
}
