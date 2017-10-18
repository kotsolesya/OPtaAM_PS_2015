/*zadanie
СП_5. Структура employee.
Создайте структуру с именем employee, содержащую два поля: номер сотрудника типа int и величину его зарплаты типа float.
 Запросите с клавиатуры данные о трех сотрудниках, сохраните их в трех структурных переменных типа
 employee и выведите информацию о каждом из сотрудников на экран. Ниже представлен рекомендуемый вид экрана во время работы программы.*/
#include<iostream>
#include<string.h>
#include<cstdlib> // dlya fynk  strtol
using namespace std;
const int N =3;
struct Temployee{
          int number;
          float zarplata;
       } human[3];
       
float func_vvod(Temployee *employee,int N ){
        for (int i =0;i<N;i++)
        {
        cout<<"Vvedite nomer sotrudnika(int)"<<i<<"=";
        cin>>employee[i].number;
        cout<<"Vvedite zarplatu sotrudnika(float)"<<i<<"=";
        cin>>employee[i].zarplata;
        //cout<<"Vvedite pervios"<<"=";
        //cin>>employee[i].pervios;
                   }//PEREDA4a STRYKTYRU V FYNKII,Iy
       }
       
  void func_vuvod(Temployee *employee ){
                   for (int i =0;i<3;i++)
        {cout<<employee[i].number<<" ";
        cout<<employee[i].zarplata<<" ";
        //cout<<employee[i].pervios<<"\n";
        }
        
        }      
       

main(){ 
       // int N;
float a;
func_vvod( human,3);
func_vuvod(human);
       system("pause");
       return 0;
       
       
       }
