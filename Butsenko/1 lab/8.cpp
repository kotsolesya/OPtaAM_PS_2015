#include<cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
    int m;
    char mars[50]; 
    cout << "Vvedit` ryadok : ";
    gets(mars);
    m=strlen(mars);
    for(int i=0;i<m;i++)
    if (mars[i] >= '0' && mars[i] <= '9')
    cout << "symvol '" << mars[i] << "' is " << "number\n";
    else
    cout << "symvol '" << mars[i] << "' is " << "no number\n";
    system("pause");
    return 0;
    }
