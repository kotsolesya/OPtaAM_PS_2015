#include <ctype.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  char mars[50];
  int m;
  cout << "ryadok : ";
  gets(mars);
  m=strlen(mars); 
  for (int i=0;i<m;i++)
  printf("%d ", mars[i]);
system("pause");
return 0;
}

