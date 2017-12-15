#include<iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"");
    char a, b, c;
    cout<< " vvedite 3 symbols: ";
    cin>>a>>b>>c;
    if(isdigit(a) && isdigit(b) &&isdigit(c))
    {
     cout<<"It's numbers: "<< endl;
     }
     else
     {
         cout<<"It's no numbers: "<<endl;
         }
system ("pause");
return 0;
}
