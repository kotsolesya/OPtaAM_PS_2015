/*zadanie
1.	��������������� ������ ������� strtol �� ������� ������numbers (������� ����� ������� ������ �������� �� �������)
charnumbers[] = "2001 60c0c0 -11011101001101110010100000 0x6fafdc";
*/
#include<iostream>
#include<string.h>
#include<cstdlib> // dlya fynk  strtol
using namespace std;
main(){
char numbers[] = "2001 60c0c0 -11011101001101110010100000 0x6fafdc";
  char * pEnd;
 long int li1 = strtol(numbers, &pEnd, 10), // ������������� ������ ����� ������ � �������� 10-� ��
           li2 = strtol(pEnd,    &pEnd, 16), // ������������� ����� ������ � �������� 16-� ��
           li3 = strtol(pEnd,    &pEnd,  2), // ������������� ����� ������ � �������� 2-� ��
           li4 = strtol(pEnd,     NULL,  0); // ������������� ���������� ����� ������ � ��������� �������� �������������
            cout<< "PodivimoSb kak roBitb fynkIIiya strtol"<<endl;
            cout<< li1  <<endl;
            cout<<li2  << endl;
            cout<<li3  << endl;
            cout<<li4  << endl;
           system("pause");
       return 0;
       
       
       }
