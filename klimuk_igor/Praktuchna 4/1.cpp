#include <iostream>
#include <cstdlib>
#include <string.h>
#include <iomanip>
using namespace std;
int main(){
	char numbers[]  = "2001 60c0c0 -1101110100110100100000 0x6fffff";
	char * pEnd;
  long int li1 = strtol(numbers, &pEnd, 10),
           li2 = strtol(pEnd,    &pEnd, 16), 
           li3 = strtol(pEnd,    &pEnd,  2),
           li4 = strtol(pEnd,     NULL,  0);
 
 cout << "In 10:" << endl;
            cout << setw(10) << li1  << endl;
            cout << setw(10) << li2  << endl;
            cout << setw(10) << li3  << endl;
            cout << setw(10) << li4  << endl;
	system("pause");
}
