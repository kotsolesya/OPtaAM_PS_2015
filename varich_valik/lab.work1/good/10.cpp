#include <iostream.h> 
int main() 
{ 
    setlocale(LC_ALL, "Russian");
char a,b,c; 
cout << "������� 3 �����: "; 
cin >> a; 
cin >> b; 
cin >> c; 
if (isdigit(a) && isdigit(b) && isdigit(c)) 
cout << "������ ���� �������" << endl; 
else 
cout << " �� ���� ������" << endl; 
system ("pause"); 
return 0;
}
