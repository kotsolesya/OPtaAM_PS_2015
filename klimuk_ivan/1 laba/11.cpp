#include <iostream>
#include <cctype>
using namespace std;
int strsum (const string & str ) {
    int sum = 0, len = str.length();
    for (int i = 0; i < len; i++) 
        if (isdigit(str[i])) sum += str[i] - '0';   
    return sum;}
int main() {
    string st;
    cin >> st;
    cout << strsum (st) << endl;
system("pause");
return 0;
}
