#include <iostream.h>
#include <string.h>
#include <cstdlib>

using namespace std;
int main(){
    char mars [50];
    char frick [50];
    int n,m;
    cout << "vvedit' 1 prizveshe: ";
    gets(mars);
    cout << "vvedit' 2 prizveshe: ";
    gets (frick) ;
    m = strlen (mars);
    n = strlen (frick);
    if(n==m)
    cout << "prizvisha odinakova" << endl;
    else
    if(m>n)
    cout << "dovshe prizveshe: " << string(mars) << endl;
    else 
    cout << "dovshe prizveshe: " << string (frick) << endl;
    system ("pause");
}
