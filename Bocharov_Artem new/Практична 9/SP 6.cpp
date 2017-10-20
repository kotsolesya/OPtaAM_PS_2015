/*Создайте структуру типа data, содержащую три поля типа int: месяц, день и год. Попросите пользователя ввести день, месяц и год в формате 31/12/2002, сохраните введенное значение в структурной переменной, а затем извлеките данные из этой переменной и выведите их на экран в том же формате, в каком они вводились. Ниже представлен рекомендуемый вид экрана во время работы программы.
Введите дату день/месяц/год 31/12/2014
Вы ввели дату: 31/12/2014*/
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
