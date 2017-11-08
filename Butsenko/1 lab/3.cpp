#include<cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
    int m,n,z;
    char mars[50];
    char sto[50];
	char frick[50]; 
    cout << "¬ведiть перше слово : ";
    gets(mars);
    cout << "¬ведiть друге слово : ";
    gets(frick);
    m=strlen(mars); 
    n=strlen(frick);
    for (int i=0;i<m;i++)
		    {
                         for(int j=0;j<n;j++)
                         {
                                 if(mars[i]==frick[j])
                                 cout << mars[i] << " ";
                                 }}
    system("pause");
    }
