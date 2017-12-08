#include <iostream>
#include <fstream>
using namespace std;
main(){
	ifstream file("D://string.txt");
	if(!file.is_open())
    {
		cout << "File cannot be opened ro readed";
		return 1;
	}
	int sum = 0;
    char ch;                    
	while(!file.eof()){
    file >> ch;
    if(ch == 'w')
          sum ++;                       
}
    cout << sum << endl;
    file.close();    
    system("pause");
return 0;
}
