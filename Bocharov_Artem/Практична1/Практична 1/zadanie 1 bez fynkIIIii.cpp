#include<iostream>
#include<math.h>
/*1.	������ �������� z = min(a, 3b) * min(2a-b, 2b), �� min(�, �) - �������� �� ����� �, �. ������� �������� ����� ����������:
a.	�� �������������� ������� min;
b.	��������� � ����������� ������� min.
*/
using namespace std;
main(){
float z,a,b;
cout<<"Vedite a i b"<<endl;
cin>>a;
cin>>b;
if(a<b){z=a*(2a-b);}
else if(a>b){z=3b*2b;}
cout<<z<<endl;
       }
