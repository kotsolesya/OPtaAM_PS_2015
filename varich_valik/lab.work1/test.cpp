#include<stdio.h>
#define ch2set(c) (1<<(c-'0'))
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
for(;;)
    {
    int set=0;
    char c;
    printf("Введите число: ");
    do
     c=getchar(); 
        while(c<'0'||c>'9');
    while(c>='0' && c<='9')
        {
        set|=ch2set(c);
        c=getchar();
        }
    printf("ВВедите цыфру: ");
    do c=getchar(); 
        while(c<'0'||c>'9');
    if(set & ch2set(c))
        printf("Цифра  %c є в числе\n", c);
    else
        printf("Цифри %c нема в числе\n", c);
    
      system ("pause");
      return 0;
    }
}
