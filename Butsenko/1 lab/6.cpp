#include<cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
    int m,p=0;
    char mars[50], probel[]=" "; 
    cout << "����i�� ������� : ";
    gets(mars);
    m=strlen(mars);
    for (int i=0;i<m;i++)
		    {
		    	if (mars[i]== probel[0])
		    	p++;
		    }
			  cout << "\n����i�i� � ����� : " << p << endl;  
			    
    system("pause");
    }
