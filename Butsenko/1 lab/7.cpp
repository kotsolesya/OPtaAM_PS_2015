#include<cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
    char mars[50]; 
    char frick[50];
    int n,m;
    cout << "����i�� 1 ��i����� : ";
    gets(mars);
    cout << "����i�� 2 ��i����� : ";
    gets(frick);
    m=strlen(mars);
    n=strlen(frick);
    if(n==m)
          cout << "��i����� �������i"<< endl; 
    else
        if(m>n)
             cout << "����� ��i����� : " << string(mars)<< endl;
        else 
             cout << "����� ��i����� : " << string(frick)<< endl; 
    system("pause");
    }
