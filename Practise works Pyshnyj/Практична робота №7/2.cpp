#include <iostream>
#include <fstream>
using namespace std;
main(){
	ofstream file1("D://numbers.txt",  ios_base::app);
	if(!file1.is_open()){
		cout << "File cannot be opened ro readed";
		return 1;
	}
	int a[5];
    for(int i = 0; i < 5; i++){
            cin >> a[i];
            }
    for(int i = 0; i < 5; i++ ){
	file1 << a[i] << endl;
} 
    file1.close();
    system("pause");
}
