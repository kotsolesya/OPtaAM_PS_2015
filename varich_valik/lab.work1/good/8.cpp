#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");
    string k;
    int b = 0;
    cin >> k;
    for (int i = 0; i < k.size(); ++i)
        if (isdigit(k[i])) ++b;
    cout <<"���������� ���� � ������ �����  = "<< b << endl;
    system("pause");
    return 0;
}
