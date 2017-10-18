#include<iostream>
#include<math.h>
/*1.3.	Знайти периметр трикутника, заданого координатами своїх вершин. Визначити функцію для розрахунку довжини відрізка за координатами його вершин.
*/
using namespace std;
double func_perimetr(double xa, double ya,double xb, double  yb)// A(xa, ya) і B(xb, yb) AB = v(xb - xa)2 + (yb - ya)2
{double z;
	z=1/2*(((xb - xa)*(xb - xa)) + ((yb - ya)*(yb - ya)));
	
      return z;
      }
main(){
double x1,y1,x2,y2,x3,y3;
cout<<"Vvedite A(x1,y1) B(x2,y2) C(x3,y3)"<<endl;
cin>>x1;
cin>>y1;
cin>>x2;
cin>>y2;
cin>>x3;
cin>>y3;
cout<< double func_perimetr(x1, y1,x2, y2) + double func_perimetr(x1, y1,x3, y3) + double func_perimetr(x2, y2,x3, y3);
system("pause");
       }
