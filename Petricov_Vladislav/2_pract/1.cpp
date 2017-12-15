#include "iostream"

using namespace std;

void PIB(string a = "Surname : Petrikov",  string b = "Name : Vladislav" ,  string c = "rating point : 4.0")
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	
}

int main()
{
	string a;
	cout << "Information for student : " << endl << endl;
	PIB();
	cout << "" << endl;
	system("pause");
}
