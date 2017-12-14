#include<cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int m,b=0;
    char mars[] ="rocesorp";
    m=strlen(mars);
    char frick[m-1];
    for(int i=m-1;i>0;i--)
    {
    frick[b]= mars[i];
    b++;
    }
    frick[3]='c';
    frick[5]='s';
    frick[7]='r';
    cout << "Result : " ;
    cout << frick << endl;
    system("pause");
    }
