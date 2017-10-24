#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	char a;
	cout << "Write string: " << endl;
	cin.get(a);
    if(isalnum(a))
                cout << "It's number or letter " << endl;
   if(isalpha(a))
                 cout << "It's letter" << endl;  
   if(isdigit(a))
              cout << "It's number" << endl;
   if(islower(a))
              cout << "It's in lower" << endl;
   if(isupper(a))
              cout << "It's in upper" << endl;
   if(isspace(a))
              cout << "It's space" << endl;
	system("pause");

}
