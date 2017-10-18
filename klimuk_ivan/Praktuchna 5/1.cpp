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
struct Ttransport{
       Tname pib;
       int weight; 
       };
void GetData(Ttransport *cars,int N);
void ShowData(Ttransport *cars,int N);
int main(){
    int n;
    float sum = 0;
	cout<<"Write counting of elements: ";
	cin>>n;
    Ttransport *cars = new Ttransport[n];
    GetData(cars, n);
    ShowData(cars, n); 
            
	system("pause");
}
void GetData(Ttransport *cars,int N)
{
     for (int i=0;i<N;i++)
      {
        cout<<"Name: " ;
		cin >> cars[i].pib.name;
        cout<<"Surname: "; 
        cin >> cars[i].pib.surname;
        cout<<"Surrname: ";
		cin >> cars[i].pib.surrname;
        cout<<"Weigth : ";  
		cin >>cars[i].weight;
      }
}

void ShowData(Ttransport *cars,int N)
{
     cout<<"----------------------\n";
   for (int i=0;i<N;i++)
    {
     if(cars[i].weight > 30){
     cout << "Transport #" << i << ": " << endl;
     cout<<cars[i].pib.name<<endl;
     cout<<cars[i].pib.surname<<endl;
     cout<<cars[i].pib.surrname<<endl;
     cout<<cars[i].weight<<endl;
     }
    }
}
