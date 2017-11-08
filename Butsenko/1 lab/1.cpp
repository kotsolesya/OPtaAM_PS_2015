#include <ctype.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char a[0],b[0],c[0];
int z=0;
cout << "vvedit` 3 chisla\n";
    gets(a);
    gets(b);
    gets(c);
if (isdigit(a[0])) 
z++;
if (isdigit(b[0])) 
z++;
if (isdigit(c[0])) 
z++;
if (z==3)
cout << "Eto 3 chisla\n";
else
cout << "Eto ne chisla\n";
system("pause");
return 0;
}

