#include <stdio.h>
#include <unistd.h> //��������� ��� usleep
#include <iostream>
using namespace std; 
int main()
{
   char text[100];
   cin>>text;
   int i=0;
   size_t j; //����������� ����� ��� ������ ������������ ���������� sizeof
 
   while (1)
   {
      for (j = i; j > 0; --j)
      {
         printf(" ");
      }
 
      printf("%.*s", 80-i-1, text);
 
      if (80 == ++i)
      {
         i = 0;
      }
 
      printf("%c", 13);
 
      usleep(100000); // �������� �� �������� ������
   }
 
   return 0;
}
