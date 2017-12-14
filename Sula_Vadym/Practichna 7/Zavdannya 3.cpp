#include <fstream>
#include <iostream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
const int N =5;
using namespace std;
 main()
{ int a[N];
int ch;
       ifstream out("numbers.txt",ios_base::out);
if (!out) {
cout << "Cannot open file.\n";
return 1;
}
  int sum =0;
      while (!out.eof()){ 
            ch=out.get();
            if(isdigit(ch)){sum+=ch;}
            cout<<ch;
      }
      cout<<sum; 
      out.close ();
system ("PAUSE"); 
return 0;
}


