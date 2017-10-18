#include<iostream>
#include<math.h>
/*2.	Знайти значення z = sign(x) + sign(y), де 
sing a = { -1 pru a<0, 0 pru a=0, 1 pru a>0}
*/
using namespace std;
int sign(int a)
{
      if(a<0)
      return -1;// PRISVOIT EDENIIIIY allo garaJ
      else if(a=0)  
      return 0;
      else if(a>0)
       return 1;
      }
main(){
int x,y,z;
cout<<"Vvedit x i y"<<endl;
cin>>x;
cin>>y;
z=sign(x)+sign(y);
cout<<z<<endl;
system("pause");
return 0;
       }
