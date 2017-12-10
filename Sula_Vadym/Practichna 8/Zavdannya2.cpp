#include <cstdlib>
#include <iostream>
#include "stdio.h"
#include "conio.h"
using namespace std;
int main(int argc, char *argv[])
{
    FILE *f;
    char s1[20];
    cin >> s1;
    f=fopen(s1,"txt");
    std::cout << f;
    char s2[20];
    cin >> s2;
    f=fopen(s2,"txt");
    std::cout << f;
    char temp;
    cout<<"Kopiiyvannya z s1 v s2:"<<endl;
    while( s1.getline())
            s2.put(temp);
    s1.close();
    s2.close();
    getch();
    return 0;

}

