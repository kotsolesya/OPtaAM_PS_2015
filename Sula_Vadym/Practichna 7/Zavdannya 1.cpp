#include <fstream>
#include <iostream>
const int N =5;
using namespace std;
 main()
{ int a[N];
       ofstream out("numbers.txt",ios_base::out);
if (!out) {
cout << "Cannot open file.\n";
return 1;
}
for(int i=0;i<N;i++){
cin >> a[i];
        }
for(int i=0;i<N;i++){
out << a[i] << "\n";}
out << "-----------------\n";
out.close ();
system ("PAUSE"); 
return 0;

}


