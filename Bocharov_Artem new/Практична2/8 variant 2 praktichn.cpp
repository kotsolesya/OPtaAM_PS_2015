#include <iostream>
#include <string>

using namespace std;
void FIO_yavniy(string a ="Hochy", string b = "Dodomy", string c="vozrast = 17")
{

     cout<<a<<" ";
     cout<<b<<" ";
     cout<<c<<" "<<endl;   
}
void FIO_propyIIIeniy(string a, string b = "Dodomy", string c="vozrast = 17")
{

     cout<<a<<" ";
     cout<<b<<" ";
     cout<<c<<" "<<endl;   
}
void FIO_propyIIIeniy_iyavniy(string a, string b = "Dodomy", string c="vozrast = 17",string d ="Standartovich")
{

     cout<<a<<" ";
     cout<<b<<" ";
     cout<<c<<" ";  
     cout<<d<<" "<<endl;  
}
int func_min_name(int k, ...)

{
    int *p=&k;
    int min= *(++p);// ykazatel na na nast element
for(int i =0;i<k;i+=2)
{p=p+2;
if(min>*p){min=*p;}
}

return min;

}


int min(int* mas,int b)
{
    int minimum=mas[0];
// ykazatel na na nast element
for(int i =1;i<b;i++)
{
if(minimum>mas[i]){minimum=mas[i];}
}
return minimum;
}


/*
template <class ім'я_типу [,class ім'я_типу]> 
заголовок_функції
{
тіло функції
}*/



main()
{ string a,b;
      //FIO_yavniy();
      //FIO_propyIIIeniy(a);
      //FIO_propyIIIeniy_iyavniy(b);

cout<<func_min_name(3,-2,-6,-5);

cout<<endl<<func_min_name(6,1,2,3,4,5,6);

int k,i;
int masiv3[10];
for(k=0;k!=10;k++)
{
srand(time(0));
i = rand() % 10; }
cout<<endl<<min(masiv3,10);
      //;cout<<FIO(a);
      //-----------------------------------------2 fynk
 

     //-----------------------------------------2 fynk
system("pause");
}
