#include <iostream.h> 
#include <string.h> 
#include <cstdlib> 

using namespace std; 
int main()
{ 
    setlocale(LC_ALL, "Russian");
char ezy [100]; 
char sqlq [100]; 
int n,m; 
cout << "������� ������ �������: "; 
gets(ezy); 
cout << "������� ������ �������: "; 
gets (sqlq) ; 
m = strlen (ezy); 
n = strlen (sqlq); 

if(n==m) 
cout << "������� ���������" << endl; 
else 
if(m>n) 
cout << "������ �������: " << string(ezy) << endl; 
else 
cout << "������ �������: " << string (sqlq) << endl; 

system ("pause");
return 0;
}
