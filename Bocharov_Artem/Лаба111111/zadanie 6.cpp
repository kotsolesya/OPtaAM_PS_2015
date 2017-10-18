
#include <iostream>
#include <string>
#include <locale>
#include <algorithm>
 using namespace std;
int main() {
cout << "NapiIIIite text:\n";
string str;
getline(std::cin, str);
cout <<count(str.begin(), str.end(), ' ') << '\n';
    system("pause");
    return 0;
    }
