#include <iostream.h>

int main()
{
    char a,b,c;
    cout << "vvedit' 3 chisla  ";
    cin >> a;
    cin >> b;
    cin >> c;
    if (isdigit(a) && isdigit(b) && isdigit(c))
    cout << "simvoli ect' chislami" << endl;
    else
    cout << " ne ect' chislami" << endl;
    system ("pause");
}
