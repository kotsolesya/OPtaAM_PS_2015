/*zadanie
1.	¬вести з консол≥ три символи. ѕерев≥рити, чи вони утворюють число.
*/
#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
main(){
char a[]={"vaetpsya"};
char b[]={"petya"};
int i =0;
int j =0;
while (i<6)
{
      i++;
j++;
        if(a[i]==b[j]){cout<<a[i];}
}
while (6<0)
{
      i--;
j--;
        if(a[i]==b[j]){cout<<a[i];}
}
for(int i =0;)
           system("pause");
       return 0;
       
       
       }
