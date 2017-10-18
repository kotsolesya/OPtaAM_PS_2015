#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	char str[255], str1[255];
	bool flag = false;
	cout << "Write string: " << endl;
	cin.getline(str, 255);
	cin.getline(str1, 255);
	cout << strcmp(str, str1) << endl;
	if(strlen(str) == strlen(str1)){
		for(int i = 0; i < strlen(str); i++){
			if(str[i] == str1[i])
				flag = true;
			else 
				flag = false;
		}
	}
	else 
		cout << "Strings have different length" << endl;
	if(flag == true)
		cout << "Strings are equal" << endl;
	else
		cout << "Strings are not equal" << endl;

	system("pause");

}
