/*�������� ��������� ���� data, ���������� ��� ���� ���� int: �����, ���� � ���. ��������� ������������ ������ ����, ����� � ��� � ������� 31/12/2002, ��������� ��������� �������� � ����������� ����������, � ����� ��������� ������ �� ���� ���������� � �������� �� �� ����� � ��� �� �������, � ����� ��� ���������. ���� ����������� ������������� ��� ������ �� ����� ������ ���������.
������� ���� ����/�����/��� 31/12/2014
�� ����� ����: 31/12/2014*/
#include<iostream>
#include<string.h>
#include<cstdlib> // dlya fynk  strtol
using namespace std;
const int N =3;
struct Tdata{
          int data;
        
       } human[0];
       
float func_vvod(Tdata *employee,int N ){for (int i =0;i<N;i++){cin>>employee[i].data;}}//PEREDA4a STRYKTYRU V FYNKII,Iy
void func_vuvod(Tdata *employee ){for (int i =0;i<3;i++){cout<<(int)employee[i].data<<".";}}      
main(){ 
float a;
cout<<"Vvedite mesyaII,deNb , god v formate 09.11.2001"<<"=";
func_vvod( human,3);
func_vuvod(human);
       system("pause");
       return 0;
       
       
       }
