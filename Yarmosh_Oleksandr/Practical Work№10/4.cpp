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
 case '0' : fout << "ноль "; break;
 case '1' : fout << "один "; break;
 case '2' : fout << "два "; break;
 case '3' : fout << "три "; break;
 case '4' : fout << "четыри "; break;
 case '5' : fout << "пять "; break;
 case '6' : fout << "шесть "; break;
 case '7' : fout << "семь "; break;
 case '8' : fout << "восемь "; break;
 case '9' : fout << "девять "; break;
 case '\n' : fout << endl;
 default : fout << temp;
 }
 }
 return 0;
 }
