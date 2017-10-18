#include <iostream> 
#include <string> 

using namespace std; 

int main() 
{ 
string str = "rocesorp"; 
str.insert(str.begin(), str[str.size()-1]); 
str.erase(str.end()-1); 
cout << str  << endl; 
system ("pause"); 

}
