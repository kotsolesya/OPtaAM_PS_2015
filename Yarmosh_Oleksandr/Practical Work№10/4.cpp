#include <iostream>
 #include <fstream>
 using namespace std; 
 int main()
 {
 ifstream fin ("failas.txt");
 ofstream fout ("failas.out.txt");
 char temp;
 while (!fin.eof())
 {
 fin.get(temp);
 switch (temp)
 {
 case '0' : fout << "���� "; break;
 case '1' : fout << "���� "; break;
 case '2' : fout << "��� "; break;
 case '3' : fout << "��� "; break;
 case '4' : fout << "������ "; break;
 case '5' : fout << "���� "; break;
 case '6' : fout << "����� "; break;
 case '7' : fout << "���� "; break;
 case '8' : fout << "������ "; break;
 case '9' : fout << "������ "; break;
 case '\n' : fout << endl;
 default : fout << temp;
 }
 }
 return 0;
 }
