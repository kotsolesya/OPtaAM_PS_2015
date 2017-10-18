/*zadanie
3.	Продемонструйте роботу функцій (введення зробить із клавіатури і вивести на екран результат із позначенням функції):
 	обробка символів
 	функції перетворення для різних типів у тип char.
*/
#include<iostream>
#include<string.h>
#include<cstdlib> // dlya fynk  strtol

using namespace std;//https://ru.stackoverflow.com/questions/12292/%D0%9F%D0%B5%D1%80%D0%B5%D0%B2%D0%BE%D0%B4-string-%D0%B2-integer
int a(string str)
{
    //string str = "abc";
    int num = NULL;
    for (int i = 0; i < str.length(); i++){ 
        //int num;    
        num = num*10 + str[i] - 0x30;   
        return num;
    }
void  main(){
   string str = "abc"; 
    a(str);
    cout<<a(str);
    system("pause");
       return 0;
}
       
       
       
