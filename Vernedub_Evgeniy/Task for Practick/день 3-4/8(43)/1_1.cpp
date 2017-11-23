#include <iostream.h>
using namespace std;

int func1(int n)
{
if (n>0)
 cout<<n<<endl;
return(n-1);
}

main()
{
 setlocale(0,"rus");
 int n;
 cout<<"¬ведите n=";
 cin>>n;     
 func1(n);
 system("pause");
}
