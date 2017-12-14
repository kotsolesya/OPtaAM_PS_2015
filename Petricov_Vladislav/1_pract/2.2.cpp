#include <iostream>
#include <stdlib.h>

using namespace std;			// Через функцію

int sign(int x)
{
int j;
if (x>0)
    {
     x=1;
     j=x;       
    }
     else if (x<0)
    {
     x=-1;
     j=x;
    }
     else
    {
     x=0;
     j=x;       
    }
return j;
}

int main()
{
    int x,y,z;
    cout << "Enter X - ";
    cin >> x;
    cout << "Enter Y - ";
    cin >> y;
    z=sign(x)+sign(y);
    cout << "Z = " << z <<endl<<endl;
    system("pause");
}
