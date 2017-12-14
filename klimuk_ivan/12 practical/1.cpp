#include <iostream>
#include <iomanip>
#include <cstdio>
const int N=256;
using namespace std;
int main()
{
float a;
float celsiy;
cout.setf(ios::right);
cout.setf(ios::showpos);
for (int i=0; i<N; i++)
{a=5.0/9.0*(i-32);
cout.width(33);
cout<<"Celsiy=  "<<i<<" "<<"farengait= "<<setprecision(3)<<a<<endl;
}
system("pause");
return 0;
}
      
