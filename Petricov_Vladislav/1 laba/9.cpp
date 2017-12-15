#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    char str[255];
    cout << "Write your string: " << endl;
    cin.getline(str, 255);
    int length = strlen(str);
    int array[length];
    for (int i = 0; i < length; i++ ){
        cout << (int) str[i] << endl;
        }
    system("pause");
    return 0;
}
