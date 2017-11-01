#include<iostream>
 #include<string.h>
 #include<cstdlib> 
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
 
                    }
        }
        
   void func_vuvod(Temployee *employee ){
                    for (int i =0;i<3;i++)
         {cout<<employee[i].number<<" ";
         cout<<employee[i].zarplata<<" ";
         
         }
         
         }      
        
 
 main(){ 
        
 float a;
 func_vvod( human,3);
 func_vuvod(human);
        system("pause");
        return 0;
        
        
        }
