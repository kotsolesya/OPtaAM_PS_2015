#include <iostream>
#include <cstdlib>
#include <string.h>
#include <iomanip>
using namespace std;

struct Tdata{
       int month;
       int day;
       int year;
       };
struct TPersonInfo{
       Tdata data;
       int weight;
       float height ;
       };
void GetData(TPersonInfo *persons,int N);
void ShowData(TPersonInfo *persons,int N);
int main(){
    int n;
	cout<<"Write counting of elements: ";
	cin>>n;
    TPersonInfo *persons = new TPersonInfo[n];
    GetData(persons, n);
    ShowData(persons, n); 
            
	system("pause");
}
void GetData(TPersonInfo *persons,int N)
{
     for (int i=0;i<N;i++)
      {
              cout << "-----------------------\n";
        cout<<"month: " ;
		cin >> persons[i].data.month;
        cout<<"day: "; 
        cin >> persons[i].data.day;
        cout<<"year: ";
		cin >> persons[i].data.year;
        cout<<"Weigth : ";  
		cin >>persons[i].weight;
        cout<<"Height : ";  
		cin >>persons[i].height;
      }
}

void ShowData(TPersonInfo *persons,int N)
{
     cout << "-----------------------\n";
   for (int i=0;i<N;i++)
    {
     if(persons[i].weight > 30){
     cout << "Person #" << i + 1 << ": " << endl;
     cout<<persons[i].data.month<<endl;
     cout<<persons[i].data.day<<endl;
     cout<<persons[i].data.year<<endl;
     cout<<persons[i].weight<<endl;
     cout<<persons[i].height<<endl;
     }
     cout << "-----------------------\n";
    }
}
