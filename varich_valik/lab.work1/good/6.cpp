#include <iostream>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
      string str;
      cout << "������� �����:" << endl;
      getline(cin, str);
      cout << "��������: " << count(str.begin(), str.end(), ' ') << endl;

      system ("pause");
       return 0;
}
