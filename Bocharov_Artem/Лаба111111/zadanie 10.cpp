#include <iostream>
#include <cstring>
 
int main()
{
  char str[100];
  strcpy( str, "x_x_str_x_x " );                // ����������� ������ "���" � str
  // �������� � ������ x_x_str_x_x ������, ������������ �� ������ ���������
  strcat( str, "stroka1 ");
  strcat( str, "stroka2 ");
  strcat( str, "stroka3 ");
  strcat( str, "stroka4" );
 
  std::cout << str << std::endl;
  system("pause");
  return 0;
}
