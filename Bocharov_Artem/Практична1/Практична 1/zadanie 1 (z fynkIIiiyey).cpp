#include<iostream>
#include<math.h>
/*1.	������ �������� z = min(a, 3b) * min(2a-b, 2b), �� min(�, �) - �������� �� ����� �, �. ������� �������� ����� ����������:
a.	�� �������������� ������� min;
b.	��������� � ����������� ������� min.
*/
using namespace std;
float min(float a, float b)
{
      if(a>b){return b;}
      else{return a;}
      }
main(){
float x,y,z;
cin>>x;
cin>>y;
z=min(x,3*y)+min(2*x-y, 2*y);

cout<<z<<endl;

//cout<<float min( a, 3b)<<endl;
system("pause");
       }
