/*
№52
Имеются два типизированных файла, элементами которых
являются числа. Получить третий файл, в котором записаны
сначала числа из первого файла, а затем — из второго.
Порядок следования чисел сохраняется.
*/


#include <fstream.h>
#include <conio.h>
using namespace std;

main()
{
 ifstream file1("file1.txt");  
 ifstream file2("file2.txt");
 ofstream file3("file3.txt",ios_base::app);      
 char str1[1000];
 char str2[1000];
 
 while (!file1.eof()) 
    {
    	
       	file1.get(str1,1000);
    }
  while (!file2.eof()) 
    {
    	
       	file2.get(str2,1000);
    }  
 file3<<str1;
 file3<<str2;
system("pause");
return 0; 
  
}
