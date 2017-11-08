#include<cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
    char mars[50]; 
    char frick[50];
    int n,m;
    cout << "Введiть 1 прiзвище : ";
    gets(mars);
    cout << "Введiть 2 прiзвище : ";
    gets(frick);
    m=strlen(mars);
    n=strlen(frick);
    if(n==m)
          cout << "Прiзвища однаковi"<< endl; 
    else
        if(m>n)
             cout << "Довше прiзвище : " << string(mars)<< endl;
        else 
             cout << "Довше прiзвище : " << string(frick)<< endl; 
    system("pause");
    }
