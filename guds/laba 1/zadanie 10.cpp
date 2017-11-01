#include <iostream>
#include <cstring>
 
int main()
{
  char str[100];
  strcpy( str, "x_x_str_x_x " );                // скопировать строку "Эти" в str
  // добавить к строке x_x_str_x_x строку, передаваемую во втором параметре
  strcat( str, "stroka1 ");
  strcat( str, "stroka2 ");
  strcat( str, "stroka3 ");
  strcat( str, "stroka4" );
 
  std::cout << str << std::endl;
  system("pause");
  return 0;
}
