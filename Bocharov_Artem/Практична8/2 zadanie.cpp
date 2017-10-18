
#include <iostream>
#include <fstream>
 
using namespace std;
int main(int argc, char *argv[])
{ cout<<"Vedite nazv faila f1"<<endl;
    char a[255];
cin>>a;
cout<<"Vedite nazv faila f2"<<endl;
char b[255];
cin>>b;
ifstream f1(a);
ofstream f2(b);
char temp;
while (!f1.eof())
		{
		temp = f1.get();
			cout<<temp;
		f2<<temp;
		}
		f1.close();
		f2.close();
    system("pause");
    return 0;

}

