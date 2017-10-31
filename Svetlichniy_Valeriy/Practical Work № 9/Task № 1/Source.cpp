#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <regex>

using namespace std;

struct User 
{
	string Name;
	string LastName;
	string E_mail;
	string Password;
};

//������� ��� ����� ����� ������� � ���� prakt_9.csv
void createFile() 
{
	ofstream FILE("D://1.csv");
	FILE << "Name" << "; " << "LastName" << "; " << "Email" << "; " << "Password" << endl;
	FILE.close();
}


//������� ��� ��������� ���������� �� ����� ������ � ����� prakt_9.csv
void readFile() 
{
	string line;
	ifstream FILE("D:/prakt_9.csv");
	while (!FILE.eof()) 
	{
		getline(FILE, line);
		cout << line << endl;
	}
	FILE.close();
}

//������� ��� ����������� ������ � ���� prakt_9.csv
void addFieldToFile(User a) 
{
	ofstream file("D:/prakt_9.csv", ios::app);
	file << a.Name << "; " << a.LastName << "; " << a.E_mail << "; " << a.Password << endl;
	file.close();
}

main() 
{
	setlocale(LC_ALL, "Russian");
	User b;
	double n;
	cout << "������� ���������� ������������� ";
	cin >> n;
	for (int i = 1; i <= n; i++) 
	{
		addFieldToFile(b);
		cout << "������� ��� " << i << " ������������ : ";
		cin >> b.Name;
		cout << "������� ������� " << i << " ������������ : ";
		cin >> b.LastName;
		cout << "������� �-mail " << i << " ������������ : ";
		cin >> b.E_mail;		
		cout << "������� ������ " << i << " ������������ : ";
		cin >> b.Password;
	}
	readFile();
	system("pause");
}
