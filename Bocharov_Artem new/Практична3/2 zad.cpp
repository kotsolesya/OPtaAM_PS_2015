#include<iostream>
#include<string.h>
using namespace std;
/*char func_how_much_letters(char *a){
    char b = 0;
   while(*a!='/0')
   {a++;
   b++;}
     return b;

     }
     */
     size_t strlen (char *str) {
    size_t len = 0;
    while (*str != '\0') {
        str++;
        len++;
    }
    return len;
}
main ()
{char a[1000];
char b;
     cout<<"Vvedite stroky"<<endl; //SPOSOB ADIN
     cin>>a;
     cout<<strlen(a)<<endl;
     size_t strlen (b);
     cout<<size_t strlen (b);
system("pause");

}
