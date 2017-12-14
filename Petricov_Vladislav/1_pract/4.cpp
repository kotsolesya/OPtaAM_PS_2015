#include <iostream>
#include <stdlib.h>
using namespace std;
bool simple(int n)
{
    for(int i=2;i<= n/2;i++)
        if((n%i)==0)
         return false;
    	 return true;
}
 
int main()
{
    for(int i=100;i<1000;i++)
       if(simple(i))
           cout << i << endl << endl;
    system("pause");
}
