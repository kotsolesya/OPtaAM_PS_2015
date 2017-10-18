#include <conio.h>
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    char s2[27] = "PS 3-1";         
    char s1[27];                                         
    cout << "strcpy(s1,s2) = " << strcpy(s1,s2) << endl; 
    cout << "s1=             " << s1            << endl; 
    char s3[7];                                          
    cout << strncpy(s3, s2, 7) << endl;    
    system("pause");
    return 0;
}

