#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
 
int main(int argc, char* argv[])
{
    char s1[] = "www.cppstudio.com";
    char s2[] = "http://www.cppstudio.com";
    cout << " s1 == s1 -> " << setw(2) << strcmp(s1,s1) << endl; 
    cout << " s1 <  s2 -> " << setw(2) << strcmp(s1,s2) << endl;
    cout << " s2 >  s1 -> " << setw(2) << strcmp(s2,s1) << endl; 
    system("pause");
    return 0;
}
