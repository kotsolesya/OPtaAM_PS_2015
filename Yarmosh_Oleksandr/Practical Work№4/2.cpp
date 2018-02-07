#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	char str[255], str1[255], str2[255];
    cout << "Write string: " << endl;
    cin.getline(str, 255);
    strcpy(str1, str);
    cout << str1 << endl;
    for (int i = 0; i < strlen(str); i++){
    	str2[i] = str[i];
	}
	cout << str2 << endl;
	system("pause");

}
