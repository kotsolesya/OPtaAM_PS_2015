#include <iostream.h>
using namespace std;

int func3(int n)
{
if (n>0)
 cout<<n<<endl;
  return(n-1);
   cout<<n<<endl;
}

main()
{
 setlocale(0,"rus");
 int n;
 cout<<"¬ведите n=";
 cin>>n;     
 func3(n);
 system("pause");
}
