#include <iostream>
#include <cstdlib>
#include <string.h>
#include <iomanip>
using namespace std;

struct employee{
       int number;
       float salary;
       };
void GetData(employee *workers,int N);
void ShowData(employee *workers,int N);
int main(){
    int n;
    float sum = 0;
	cout<<"Write counting of elements: ";
	cin>>n;
    employee *workers = new employee[n];
    GetData(workers, n);
    ShowData(workers, n); 
            
	system("pause");
}
void GetData(employee *workers, int N)
{
     for (int i=0;i<N;i++)
      {
        cout<<"Number of " << i + 1 << " worker: ";
		cin >> workers[i].number;
        cout<<"Salary: "; 
        cin >> workers[i].salary;
      }
}

void ShowData(employee *workers,int N)
{
     cout<<"----------------------\n";
   for (int i=0;i<N;i++)
    {
     cout << "Worker #" << i + 1<< ": " << endl;
     cout<<workers[i].number<<endl;
     cout<<workers[i].salary<<endl;
    }
}
