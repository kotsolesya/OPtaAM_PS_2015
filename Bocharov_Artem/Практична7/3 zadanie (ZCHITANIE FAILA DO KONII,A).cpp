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
       ifstream out("numbers.txt",ios_base::out);//������� ���� ��� ������
if (!out) {
cout << "Cannot open file.\n";
return 1;
}
  int sum =0;
      while (!out.eof()){ //�������� �� ����� �����, ������� ��������� �����������
            ch=out.get();//��������� ������ � ��������, �� ������� ��������� ��������� f1
            if(isdigit(ch)){sum+=ch;}
            cout<<ch;
         //������� ������ �� �����
         // ZCHITAVAEM FAIL DO KONIIA
      }
      cout<<sum; 
      out.close ();
system ("PAUSE"); 
return 0;

}


