#include <iostream>
#include <cstdlib>
#include <string.h>
#include <iomanip>
using namespace std;
struct Tname{
       char name[15];
       char surname[20];
       char surrname[30]; 
       };
       
struct Tstudent{
       Tname name; 
       int marks[5];
       };
       
void GetData(Tstudent *student,int N);
void ShowDataSVG(Tstudent *student,int N);
void ShowDataBadMarks(Tstudent *student,int N);

int main(){
    int n, counter = 0;
    float sum = 0;
	cout<<"Write counting of elements: ";
	cin>>n;
    Tstudent *student = new Tstudent[n];
    GetData(student, n);
    for (int i = 0; i < n; i++){
        if(student[i].marks[0] <= 2)
            counter++;
        }
    cout<<"\n----------------------\n";
     cout << "Students with bad marks in Math: " << counter << endl;
            
	system("pause");
}
void GetData(Tstudent *student,int N)
{
     for (int i=0;i<N;i++)
      {
        cout<<"Name: " ;
		cin >> student[i].name.name;
        cout<<"Surname: "; 
        cin >> student[i].name.surname;
        cout<<"Surrname: ";
		cin >> student[i].name.surrname;  
		for(int j = 0; j < 5; j++){
                student[i].marks[j] = 1 + rand()%5;
                cout << "Mark " << "#" << j << ": " << student[i].marks[j] << endl;
                }
      }
}



void ShowDataSVG(Tstudent *student,int N)
{
     cout<<"----------------------\n";
   for (int i=0;i<N;i++)
    {
     cout << "Student #" << i << ": " << endl;
     cout<<student[i].name.name<<endl;
     cout<<student[i].name.surname<<endl;
     cout<<student[i].name.surrname<<endl;
    }
}
void ShowDataBadMarks(Tstudent *student,int N)
{
     cout<<"----------------------\n";
   for (int i=0;i<N;i++)
    {
     cout << "Student #" << i << ": " << endl;
     cout<<student[i].name.name<<endl;
     cout<<student[i].name.surname<<endl;
     cout<<student[i].name.surrname<<endl;
    }
}
