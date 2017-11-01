#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main()
{
    int a;
    float b;
    do
    {
          cout<<"Enter the number"<<endl;
          cin>>b;
          cout<<"up to how many signs number"<<endl;
          cin>>a;
          cout<<"round off the number in the filed= "<<setprecision(a)<<*fixed<<b<<endl;
          cout<<"round off the number in the nay4nomy= "<<setprecision(a)<<scientific<<b<<endl;
          }
          while(a!=1);
          system("pause");
          return 0;
          }
