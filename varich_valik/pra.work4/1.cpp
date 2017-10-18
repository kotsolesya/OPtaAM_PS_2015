#include <stdio.h>
#include <stdlib.h>

int main()
{
   char numbers[] = "2001 60c0c0 -11011101001101110010100000 0x6fafdc";
   char *ptr;
   long ret;

   ret = strtol(numbers, &ptr, 10);
   printf("The number is %ld\n", ret);
   printf("String part is |%s|", ptr);
   system ("pause");
   return(0);
}

