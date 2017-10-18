/*zadanie
1.	Продемонструйте роботу функції strtol на прикладі масивуnumbers (вивести кожен елемент масиву відповідно до формату)
charnumbers[] = "2001 60c0c0 -11011101001101110010100000 0x6fafdc";
*/
#include<iostream>
#include<string.h>
#include<cstdlib> // dlya fynk  strtol
using namespace std;
main(){
char numbers[] = "2001 60c0c0 -11011101001101110010100000 0x6fafdc";
  char * pEnd;
 long int li1 = strtol(numbers, &pEnd, 10), // преобразовать первую часть строки в значение 10-й СС
           li2 = strtol(pEnd,    &pEnd, 16), // преобразовать часть строки в значение 16-й СС
           li3 = strtol(pEnd,    &pEnd,  2), // преобразовать часть строки в значение 2-й СС
           li4 = strtol(pEnd,     NULL,  0); // преобразовать оставшуюся часть строки в распознав значение автоматически
            cout<< "PodivimoSb kak roBitb fynkIIiya strtol"<<endl;
            cout<< li1  <<endl;
            cout<<li2  << endl;
            cout<<li3  << endl;
            cout<<li4  << endl;
           system("pause");
       return 0;
       
       
       }
