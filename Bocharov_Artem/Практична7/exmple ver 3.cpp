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

char ch;
       ifstream out("numbers.txt",ios_base::out);//������� ���� ��� ������
if (!out) {
cout << "Cannot open file.\n";
return 1;
}
  int sum =0;
   int mnojennya =1;
   //int AVG<<endl
      while (!out.eof()){ //�������� �� ����� �����, ������� ��������� �����������
            ch=out.get();//��������� ������ � ��������, �� ������� ��������� ��������� f1
          out>>ch;
               
               mnojennya*=ch;
                  cout<<"ch="<<ch<<"\n";
                  
                  
      }
      cout<<"Suma ="<<sum<<endl; 
      cout<<"Mnojennya ="<<mnojennya<<endl;
      
      out.close ();
system ("PAUSE"); 
return 0;

}


