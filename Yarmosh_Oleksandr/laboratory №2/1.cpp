#include <iostream>
#include <conio.h>
#include <math.h>
#include <fstream>
using namespace std;
 
int main ()
{
      ofstream fout("text.txt");
int x,y;
for(x=-10;x<=10;x++){
y=(pow(x,2)-2*x+4);

cout<<"y="<<y<<endl;
fout << "y="<<y<<endl;
}
 fout.close(); 
_getch();
return 0;
}
