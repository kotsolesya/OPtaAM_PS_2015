#include <iostream>
#include <cstring>
 
int main()
{
  char str[100];
  strcpy( str, " Galya "); 
  strcat( str, " my "); 
  strcat( str, " best ");               
  strcat( str, "friend");
  std::cout << str << std::endl;
  system("pause");
  return 0;
}
