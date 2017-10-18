/*zadanie
2.	Напишіть власні програмки, які виконують дії відповідним функціям із таблиці 1, та порівняйте їх роботу.
Для функцій: 
 	копіювання рядків
 	конкатенація рядків
 	порівняння рядків*/
#include<iostream>
#include<string.h>
#include<cstdlib> // dlya fynk  strtol
using namespace std;
//Kopiyvanya strok
char *func_1(char *d, const char *s)
{ char *saved = d;
   while (*s){*d++ = *s++;}
   *d = 0;
   return saved;
}

char *func_2(char *dest, const char *src)
{
    size_t i,j;
    for (i = 0; dest[i] != '\0'; i++)
        ;
    for (j = 0; src[j] != '\0'; j++)
        dest[i+j] = src[j];
    dest[i+j] = '\0';
    return dest;
}
 void func_3(char s1, char s2) 
 {
        
}
main(){
char a[]={"Vasya"};
char b[]={"Petrosyan"};
       cout<<func_1(a,b)<<endl;
       cout<<func_2(a,b)<<endl;
       cout<<func_3(a,b)<<endl;
           system("pause");
       return 0;
       
       
       }
