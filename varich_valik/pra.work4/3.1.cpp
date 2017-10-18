#include <conio.h>
#include <iostream>
using namespace std;
 
int main(int argc, char* argv[])

{
    setlocale(LC_ALL, "Russian");
    char symbol    = 'd'; 
    char digit     = '9'; 
    char space     = ' '; 
    char character = '#'; 
    cout << symbol    << " - это цифра или буква?: "; isalnum(symbol)? cout << "true\n": cout << "false\n";
    cout << symbol    << " - это буква?:           "; isalpha(symbol)? cout << "true\n": cout << "false\n";
    cout << digit     << " - это цифра?:           "; isdigit(digit)? cout << "true\n": cout << "false\n";
    cout << space     << " - это пространство?:    "; isspace(space)? cout << "true\n": cout << "false\n";
    cout << symbol    << " - это маленькая буква?: "; islower(symbol)? cout << "true\n": cout << "false\n";
    cout << symbol    << " - это большая буква?:   "; isupper(symbol)? cout << "true\n": cout << "false\n";
    system("pause");
    return 0;
}
