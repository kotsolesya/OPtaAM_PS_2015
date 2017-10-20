#include "iostream"
#include <string>
 
using namespace std;
 
int main()
{
    char a[10000];
    cout<<"type string"<<endl;
    cin.getline(a,1000);//vveli slovo
    for (int b=strlen(a)-1; b>=0; b--) //a.length() vertae dliny strokiv
        cout<<a[b];
    cin.get();
    cin.get();
}
