#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	int ctr = 0;
	bool tf;
	char str[255], str1[255];
	cout << "Write your string "<< endl;
	cin.getline(str, 200);
	int i = strlen(str) - 1;
	while( i >= 0 ){
		str1[ctr] = str[i];
		ctr++;
		i--;			
	}
	for(int i = 0; i < strlen(str); i++){
		if(str[i] == str1[i])
			tf = true;
		else 
			tf = false;
		
	}
	cout << tf << endl;
	system("pause");
}
