#include <iostream>
#include <stdlib.h>
using namespace std;
int min(int x, int y)				 //b.	оголосити і використати функцію min.
{
int j;
if (x>y)
{
 j=y;
}
else
{
 j=x;  
}
}

int main()
{
    int z,a,b;
    cout << "Enter a - ";
    cin >> a;
    cout << "Enter b - ";
    cin >> b;
    z=min(a,3*b)*min(2*a-b,2*b);
    cout << "Z = " << z <<endl<<endl;
    system("pause");
}

