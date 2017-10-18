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

int func_min_name(int k, ...) //zadanie 2

{
    int *p=&k;
    int min= *(++p);// ykazatel na na nast element
for(int i =0;i<k;i+=2)
{p=p+2;
if(min>*p){min=*p;}
}

return min;

}

/*
int min(int* mas,int b)//zadanie 3
{
    int minimum=mas[0];
// ykazatel na na nast element
for(int i =1;i<b;i++)
{
if(minimum>mas[i]){minimum=mas[i];}
}
return minimum;
}
*/
template <class T>
T min(T* mas, int b) //kolvo elementov = int
{
    T minimum=mas[0];
// ykazatel na na nast element
for(int i =1;i<b;i++)
{
if(minimum>mas[i]){minimum=mas[i];}
}
return minimum;
}



main()
{ string a,b;
      //FIO_yavniy();
      //FIO_propyIIIeniy(a);
      //FIO_propyIIIeniy_iyavniy(b);

cout<<func_min_name(3,-2,-6,-5);

cout<<endl<<func_min_name(6,1,2,3,4,5,6);
int masiv3[3]={1,2,3};

float masiv4[3]={1.1,2.2,3.2456};
cout<<endl<<min(masiv4,3);
      //;cout<<FIO(a);
      //-----------------------------------------2 fynk
 

     //-----------------------------------------2 fynk
system("pause");
}
