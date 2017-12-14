#include "iostream"
#include "locale"
#include "string.h"
using namespace std;
int main(int argc, char const *argv[])
{
char str[255];	
cout <<"Строка "<<endl;
cin.getline(str,255);
int lenght = strlen(str);
int array[lenght];
for (int i = 0; i < lenght; i++)
{
cout<<(int) str[i] << endl;
}
	return 0;
}
