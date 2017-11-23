#include <iostream.h>
using namespace std;

int func2(int n)
{
if (n>0)
 return(n-1);
  cout<<n<<endl;
}

main()
{
 setlocale(0,"rus");
 int n;
 cout<<"¬ведите n=";
 cin>>n;     
 func2(n);
 system("pause");
}
