#include <iostream>
#include <fstream>
using namespace std;
main(){
	ofstream file1("D://numbers.txt",  ios_base::app);
	if(!file1.is_open()){
		cout << "File cannot be opened ro readed";
		return 1;
	}
	const int N = 40;
	int sum = 0;
	long int mult = 1;
	char *FName = "D://numbers.txt";
    char S[N] = ("");
    ifstream file(FName);
	 while (!file.eof()) 
	   {
	     file.getline(S,N); 
	     cout << S << endl; 
	     sum += atoi(S);
	     mult *= atoi(S);
	   }
    cout << (float)sum/10 << endl;
    cout << sum << endl;
    cout << mult << endl;
    file1.close();
    system("pause");
}
