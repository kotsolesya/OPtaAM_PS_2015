#include <iostream>
#include <stdlib.h>
using namespace std;
int main()						//a.	не використовуючи функцію min;
{
    int z,a,b,min1,min2;
    cout << "Enter a - ";
    cin >> a;
    cout << "Enter b - ";
    cin >> b;
    if (a>3*b)
    {
     min1=3*b;    
    }
    else
    {
     min1=a;
    }
     if (2*a-b>2*b)
    {
     min2=2*b;  
    }
    else
    {
     min2=2*a-b;   
    }
    z=min1*min2;
    cout << "Z = " << z << endl << endl;  
    system ("pause");
}

