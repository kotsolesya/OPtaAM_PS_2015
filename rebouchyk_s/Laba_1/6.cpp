#include <iostream>
#include <cstring>

using namespace std; 

int main()
{
    string k;
    int b = 0;
    cin >> k;
    for (int i = 0; i < k.size(); ++i)
        if (isdigit(k[i])) ++b;
    cout <<"Quantity II = "<< b << endl;
    system("pause");
    
}
