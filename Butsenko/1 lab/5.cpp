#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Russian");
    char string[200];
 
    cout << "Введите строку : ";
    cin.getline(string,200);
 
    char * pch = strtok (string," "), 
         * word = 0;
 
    int length = strlen(pch);          
 
    int maxLen = 0; 
 
      while (pch != NULL)                     
      {
          length = strlen(pch);
          if (maxLen < length )
          {
              maxLen = length;
              word = pch; 
          }
 
          pch = strtok (NULL, " "); 
      }
 
      cout << "Самое длинное слово: " << word
           << ", его длина равна: " << maxLen
           << " символам " << endl;
 system("pause");
    return 0;
}
