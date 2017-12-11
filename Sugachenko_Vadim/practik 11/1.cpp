#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <time.h>

using namespace std;

int main ()
{
	   const char* FName = "1.txt";
	   char x[10];
	   cin.getline(x, 10);
	   ofstream file(FName, ios::out | ios::binary | ios::app);
	   file << x ;
	   file.close();
   system("pause");     
}
