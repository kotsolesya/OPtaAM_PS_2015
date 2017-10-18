#include<iostream>
#include<math.h>
/*2.	Знайти значення z = sign(x) + sign(y), де 
sing a = { -1 pru a<0, 0 pru a=0, 1 pru a>0}
*/
main(){
int a,b,x,y;
std::cin>>x>>y;
if(x<0) x=-1;
      else if (x==0) x=0;
                    else if(x>0)x=1;
if(y<0) y=-1;
      else if (y==0) y=0;
                    else if(y>0)y=1;
std::cout<<x+y;

//cout<<float min( a, 3b)<<endl;
system("pause");
       }
