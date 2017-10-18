#include <iostream> 
#include <string.h> 
using namespace std; 

main () 
{ 
char str1 [100]; 
char str2 [100]; 
cin » str1; 
cin » str2; 
if(strlen(str1)>strlen(str2)) 
{ 
cout « str1 « endl; 
} 
else 
if (strlen(str1)<strlen(str2)) 
{ 
cout « str2 « endl; 
} 
else 
{ 
cout « "kol  simvolov v 1 stroke = kolichestvy simvolov vo 2 stroke" << endl;
} 
system("pause"); 
return 0; 
}
