/*
�16
������� �������������� ����, ���������� ��������
�������� ��������� �����. �������� �����, ������������ �����
�������.
*/
#include<fstream>
#include<string>
#include <conio.h>
#include <iostream>
using namespace std;
main(){
ifstream fs("file.txt");

string str;
char c;
while(fs.get(c))
{
    fs.get();
    str+=c;
}
cout<<str<<endl;   
system("pause");
return 0;   
 }




