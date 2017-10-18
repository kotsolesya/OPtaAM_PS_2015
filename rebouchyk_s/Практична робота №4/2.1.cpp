#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	char str[255] = "Hello", str1[255] = ", people", str3[255] ;
	strcpy(str3, str);
    strcat(str,str1);
    cout << str << endl;
    int j = 0;
    for(int i = strlen(str3); i < (strlen(str3) + strlen(str1)); i++){
    	str3[i] = str1[j];
    	j++;
	}
	cout << str3 << endl;
	system("pause");

}
