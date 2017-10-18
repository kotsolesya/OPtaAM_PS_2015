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
Tdata GetData(Tdata pointer);
int main(){
    Tdata data;
    data = GetData(data);
    cout << data.month << '.' << data.day << '.' << data.year << endl;
            
	system("pause");
}
Tdata GetData(Tdata pointer)
{
        cout<<"Month: ";
		cin >> pointer.month;
		if(pointer.month > 13 || pointer.month < 0){cout << "ERROR" << endl;}
        cout<<"Day: "; 
        cin >> pointer.day;
        if(pointer.day > 32 || pointer.day < 0){cout << "ERROR" << endl;}
        cout<<"Year: "; 
        cin >> pointer.year;
        if(pointer.year < 0){cout << "ERROR" << endl;}
        
        return pointer;              
}
