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
    printf("������� �����: ");
    do
     c=getchar(); 
        while(c<'0'||c>'9');
    while(c>='0' && c<='9')
        {
        set|=ch2set(c);
        c=getchar();
        }
    printf("������� �����: ");
    do c=getchar(); 
        while(c<'0'||c>'9');
    if(set & ch2set(c))
        printf("�����  %c � � �����\n", c);
    else
        printf("����� %c ���� � �����\n", c);
    
      system ("pause");
      return 0;
    }
}
