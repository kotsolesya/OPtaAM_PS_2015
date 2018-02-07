#include <iostream>
#include <stdio.h>
#include <time.h>
#include <fstream>
#include <conio.h>
#include <cstdlib>
using namespace std;
void Exchange (int i, int j, int *x)
{
  int tmp;
  tmp = x[i];
  x[i] = x[j];
  x[j] = tmp;
}
void Quick_Sort(int left, int right, int *x)
{
  int i, j, m, h;
  i = left;
  j = right;
  m = x[(i+j+1)/2];
  do 
  {
    while (x[i] < m) i++;
    while (x[j] > m) j--;
    if (i <= j) 
	{
Exchange(i,j,x);
i++;
j--;
    }
  } 
  while(i <= j);
  if (left < j) 
    Quick_Sort (left, j, x);
  if (i < right) 
    Quick_Sort (i, right, x);
}
void Hoar_Sort (int k, int *x)
{
  Quick_Sort (0, k-1, x);
}
int main()
{
	setlocale(LC_ALL, "Russian");
int n,k1,z ;
cout << "Количество элементов: \n "; 
cin >> n;  
    int a[n];
   int b[n] ;
 {
 srand(time(NULL)); 
for (int i=0; i<n; i++)
{
a[i]=rand()%10;
}
for (int i=0; i<n; i++)
{
b[n]=rand()%10;   
}
}
Hoar_Sort (n, a);
Hoar_Sort (n, b);
ofstream file("Z_2.txt",ios_base::trunc); 
file << "Масив 1: ";
for (int i=0; i<n; i++)
{
file << a[i] << " "; 
}
file <<endl;
file << "Масив 2: ";
for (int i=0; i<n; i++)
{
file << b[n] << " "; 
}
file <<endl;
cout <<endl;
int k2;
cout<<"Что ввести:"<<endl;
cout<<"Кнопка 1 C= A _ B "<<endl;
cout<<"Кнопка 2 C= A u B "<<endl;
cout<<"Кнопка 3 C= A / B "<<endl;
cout<<"Кнопка 4 C= A - B "<<endl;
cin>>k2;
switch(k2)
{
case 1:
{
file<< "Ввывести повторяющиеся элементы масива"<<endl;
for (int i = 0; i<n; i++)
{
    for (int i2 = 0; i2<n; i2++)
	{
        if (a[i]==b[i2])
        { 
		file<<a[i];
		} 
		}
		}
		}
break;
case 2:
{
file <<endl<< "C= A u B: "<<endl; 
for (int i = 0; i<n; i++)
           {file <<a[i];
		   }
     file <<" ";       
for (int j = 0; j<n; j++)
           {
            file <<b[j];
			}
			}
            file<<endl;      
break;
case 3:
{
		file <<endl<<"C = A/B: ";
for (int i = 0; i<n; i++)
{ 
    for (int i2 = 0; i2<n; i2++)
	{
        if (a[i]!=b[i2] )
        { 
		file<<a[i];
		}
		}	
        file<<endl;
break;
}
case 4:
{
		file <<endl<<"C = (A/B) u (B/A): ";
for (int i = 0; i<n; i++)
{ 
    for (int i2 = 0; i2<n; i2++)
	{
        if (a[i]!=b[i2] && b[i2]!=a[i])
        { 
		file<<a[i];
		}
		}	
        file<<endl;
break;
}
}
}
file.close();
system("pause");
return 0;
}
}
