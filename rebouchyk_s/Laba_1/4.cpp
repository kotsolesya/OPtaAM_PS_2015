#include <iostream>
#include <string>
#include <locale>
#include <algorithm>

using namespace std;

int main() 
{
cout << "Enter text:\n";
string str;
getline(cin, str);
cout << count(str.begin(), str.end(), ' ') << endl;

system("pause");
}
