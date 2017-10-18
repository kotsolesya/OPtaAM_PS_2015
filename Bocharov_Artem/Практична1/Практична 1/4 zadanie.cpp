#include<iostream>
#include<math.h>
/*4.	Знайти всі тризначні прості числа. (Визначити функцію, що дозволяє розпізнавати прості числа.)*/
int simple(int n){
    for(int i=100;i<= n/2;i++) if( (n%i)==0 ) return 0;
return 1;
}

       int main() {
     for(int i=100;i < 1000;i++)    if(simple(i))  printf("%d ", i);

system("pause");
return 0;
};
