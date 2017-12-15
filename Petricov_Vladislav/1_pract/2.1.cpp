#include <iostream>
#include <stdlib.h>
using namespace std;
int main()					// Без функції
{
    int z,x,y;
    cout << "Enter X - ";
    cin >> x;
    cout << "Enter Y - ";
    cin >> y;
    if (x>0)
    {
     x=1;       
    }
     else if (x<0)
    {
     x=-1;    
    }
     else
    {
     x=0;     
    }
     if (y>0)
    {
     y=1;       
    }
     else if (y<0)
    {
     y=-1;    
    }
     else
    {
     y=0;     
    }
    z=x+y;
    cout << "Z = " << z << endl<< endl;
    system ("pause");
}

