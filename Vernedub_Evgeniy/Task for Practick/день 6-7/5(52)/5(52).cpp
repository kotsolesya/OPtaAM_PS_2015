/*
�52
������� ��� �������������� �����, ���������� �������
�������� �����. �������� ������ ����, � ������� ��������
������� ����� �� ������� �����, � ����� � �� �������.
������� ���������� ����� �����������.
*/


#include <fstream.h>
#include <conio.h>
using namespace std;

main()
{
 ifstream file1("file1.txt");  
 ifstream file2("file2.txt");
 ofstream file3("file3.txt",ios_base::app);      
 char str1[1000];
 char str2[1000];
 
 while (!file1.eof()) 
    {
    	
       	file1.get(str1,1000);
    }
  while (!file2.eof()) 
    {
    	
       	file2.get(str2,1000);
    }  
 file3<<str1;
 file3<<str2;
system("pause");
return 0; 
  
}
