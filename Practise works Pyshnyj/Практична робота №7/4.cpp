#include <iostream>
#include <fstream>
using namespace std;
main(){
       srand(time(NULL));
	ofstream file1("D://string.txt", ios_base::out | ios_base::trunc);
	if(!file1.is_open()){
		cout << "File cannot be opened ro readed";
		return 1;
	}
	char str[40];
    for(int i = 0; i < 40; i++)
    {
	file1 << (char)(rand()%(122 - 65) + 65);
	cout << (rand()%(172 - 101) + 101) << "  " ;
} 
    file1.close();
    
    
    system("pause");
return 0;
}
