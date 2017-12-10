#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
main()
{ 
const int N =50999;
srand(time(NULL));
ofstream out("numbers.txt",ios_base::out | ios_base::trunc);
if (!out) 
{
cout << "Cannot open file.\n";
return 1;
}
char str[N];
for(int i=0;i<N;i++)
{
out<<(char) (rand()%((122-65)+65) ;
cout<<rand()%((172-101)+101)<<" "; 
}
out.close ();
system ("PAUSE"); 
return 0;
}


