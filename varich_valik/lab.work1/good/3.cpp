#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	char a[255], b[255];
	cin.getline(a, 255);
	cin.getline(b, 255);
	if(strlen(a) > strlen(b)){
	for (int i = 0; i < strlen(a); i++){
        for(int j = 0; j < strlen(b); j++){
                if (a[i] == b[j])
                   cout << a[i] << " ";
                }          
    }
}
    else {
   	for (int i = 0; i < strlen(b); i++){
        for(int j = 0; j < strlen(a); j++){
                if (b[i] == a[j])
                   cout << a[i] << " ";
                }          
         }
}
	system("pause");

}
