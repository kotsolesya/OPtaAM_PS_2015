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


main()
{ string a,b;
      FIO_yavniy();
      FIO_propyIIIeniy(a);
      FIO_propyIIIeniy_iyavniy(b);
      //;cout<<FIO(a);
system("pause");
}
