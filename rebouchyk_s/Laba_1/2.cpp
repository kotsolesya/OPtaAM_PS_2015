#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int main()
{
    char ch;
    int size = 0;
    while (cin.get(ch))
    {
        if (ch == ' ' || ch == '\n')
        {
            cout << "Size = " << size << endl;
            size = 0;
        }
        else size++;
    }
    return 0;
}
