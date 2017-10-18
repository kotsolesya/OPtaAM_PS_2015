#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
      string str;
      cout << "Введите рядок:" << endl;
      getline(cin, str);
      cout << "Пробелов: " << count(str.begin(), str.end(), ' ') << endl;

      system ("pause");
       return 0;
}
