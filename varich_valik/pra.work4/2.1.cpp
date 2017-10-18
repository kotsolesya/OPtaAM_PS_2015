#include <conio.h>
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])
{
    char s1[30] = "I am ";
    char s2[] = "programmer on the C++!!!!";
    cout << strcat(s1,s2) << endl;              
    char s3[23] = "I am a good ";
    cout << strncat(s3,s2,10) <<  "!!!" << endl; 
    system("pause");
    return 0;
}
