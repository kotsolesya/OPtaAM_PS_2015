
#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;

 
int main()
{
    char ch;
    int size = 0;
    while (std::cin.get(ch))
    {
        if (ch == ' ' || ch == '\n')
        {
            std::cout << "Size = " << size << std::endl;
            size = 0;
        }
        else size++;
    }
    system ("pause");
    return 0;
}
