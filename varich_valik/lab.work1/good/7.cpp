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
cout << "ВВедите первую фамилия: "; 
gets(ezy); 
cout << "ВВедите вторую фамилия: "; 
gets (sqlq) ; 
m = strlen (ezy); 
n = strlen (sqlq); 

if(n==m) 
cout << "Фамилия одинакова" << endl; 
else 
if(m>n) 
cout << "Дольше фамилия: " << string(ezy) << endl; 
else 
cout << "Дольше фамилия: " << string (sqlq) << endl; 

system ("pause");
return 0;
}
