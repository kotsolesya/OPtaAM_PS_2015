#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int main ()
{
 int d = 0;
    char a[3]; a[0] = '9'; a[1] = '1'; a[2] = '1';    
    int i;
    for(i = 0; i < 3;i++)
    if(a[i] >= '0' && a[i] <= '9')
           d = d*10 + a[i] - '0';
     
         
         
         
         else {printf("Error\n");
         break;
        }
         printf("%d", d);     
system ("pause");
return 0;
}
