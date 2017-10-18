#include <iostream.h> 
int main() 
{ 
    setlocale(LC_ALL, "Russian");
char a,b,c; 
cout << "введите 3 числа: "; 
cin >> a; 
cin >> b; 
cin >> c; 
if (isdigit(a) && isdigit(b) && isdigit(c)) 
cout << "символ есть числами" << endl; 
else 
cout << " не есть числом" << endl; 
system ("pause"); 
return 0;
}
