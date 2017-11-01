#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <algorithm>

const int N=10;

using namespace std;

void createFile()
{
    ofstream file("file.txt");
    file.close();         
}

void readFile()
{
    string buff;
    ifstream file("file.txt");
    while(!file.eof())
	{
    getline(file, buff);
    cout << buff << endl;
    }
    file.close();         
}

float addFunctionResults()
{
 ofstream file("file.txt",ios_base::app);
 float function;
	for(int i=0;i<=N;i++)
	{
		int x=i;
		function=sin(x)-log(10,x);
		file << "X=" << i << "\t" << "F(X)=" << function << "\n" << "----------------------" <<endl;
	}
}  

main ()
{
 createFile();
 addFunctionResults();
 readFile();
 system("pause");     
}
