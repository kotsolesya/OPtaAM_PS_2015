#include "iostream"  
#include "fstream" 

using namespace std; 

int main () 
{ 
	setloclae(LC_ALL,"Russian");
	const char* fout = "Point_One.txt"; 
	char a[10]; 
	cin.getline(a, 10); 
	ofstream file(fout, ios::out | ios::binary | ios::app); 
	file << a << endl; 
	file.close(); 
	system("pause");      
}
