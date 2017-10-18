#include <fstream>
//#include <ifstream.h>
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
       ifstream out("numbers.txt",ios_base::out);//Открыли файл для чтения
if (!out) {
cout << "Cannot open file.\n";
return 1;
}
  int sum =0;
      while (!out.eof()){ //Проходим по всему файлу, сдвигая указатель посимвольно
            ch=out.get();//считываем символ с элемента, на который указывает указатель f1
            if(isdigit(ch)){sum+=ch;}
            cout<<ch;
         //выводим символ на экран
         // ZCHITAVAEM FAIL DO KONIIA
      }
      cout<<sum; 
      out.close ();
system ("PAUSE"); 
return 0;

}


