#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;
int main()
{
int i;
char a;
cout.setf(ios::right);
for(i=30;i<=255;i++)
{
                    cout.width(30);
                    a=i;
                    cout<<"ASCII "<<i<<" dec "<< dec<<a<<" oct"<<a<<"hex"<<a<<endl;
                    }
                    cout<<endl;
                    system("pause");
                    return 0;
}
