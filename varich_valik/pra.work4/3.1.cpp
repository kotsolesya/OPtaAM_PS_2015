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
    cout << symbol    << " - ��� ����� ��� �����?: "; isalnum(symbol)? cout << "true\n": cout << "false\n";
    cout << symbol    << " - ��� �����?:           "; isalpha(symbol)? cout << "true\n": cout << "false\n";
    cout << digit     << " - ��� �����?:           "; isdigit(digit)? cout << "true\n": cout << "false\n";
    cout << space     << " - ��� ������������?:    "; isspace(space)? cout << "true\n": cout << "false\n";
    cout << symbol    << " - ��� ��������� �����?: "; islower(symbol)? cout << "true\n": cout << "false\n";
    cout << symbol    << " - ��� ������� �����?:   "; isupper(symbol)? cout << "true\n": cout << "false\n";
    system("pause");
    return 0;
}
