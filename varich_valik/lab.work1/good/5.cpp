#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{ 
char s[100000];
int  number [10000];
char a;
 
int i,j=0,n=0,k=0, g, max=0, hulp=0, hulp_1=0;
 for (i=0;i<100000;++i)
 {
 
    s[i]=getchar();
 
if (s[i]=='n')
{
   number[k]=j;
   break;
}
    ++n;
 
    if (s[i] != ' ')
    {
        ++j;
    }
    if (s[i]==' ')
    {
        number[k]=j;
        ++k;
        j=0;
    }
 }
printf("n");
max=number[0];
 for (g=0;g<k;++g)
 {
 
if (number[g]>max)
{
    max=number[g];
    hulp=g;
}
 }
++hulp;
 printf("The longest word at number %d: ", hulp);
 
 for (g=0;g<n;++g)
 {
     if (s[g]==' ')
 
     {
         ++hulp_1;
     }
     if (hulp-hulp_1==1)
     printf("%c", s[g]);
 
     if (hulp_1>g)
     break;
 
 }
 
   return 0;
   system ("pause");
}
