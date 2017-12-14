#include "Windows.h"
#include "iostream"
#include "fstream" 
#include "regex" 

using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 0) | text));
}

regex regular("([\\w-]+)""(@)""([\\w-]+)""(\.)""([a-z]{2,5})");

char path[] = "Point_Two.csv";

struct User
{
	string Name;
	string Lastname;
	string email;
	string password;
};

void createFile()
{
	ofstream file(path, ios::binary);
	file << "Имя" << ";" << "Фамилия" << ";" << "E-mail" << ";" << "Пароль" << endl;
	file.close();
}

void readFile()
{
	string a;
	ifstream file(path, ios::binary | ios::in);
	while (!file.eof())
	{
		getline(file, a);
		cout << a << endl;
	}
	file.close();
}

void addFieldToFile(User man)
{
	ofstream file(path, ios::binary | ios::app);
	file << man.Name << ";" << man.Lastname << ";" << man.email << ";" << man.password << endl;
	file.close();
}

bool validEmail(string email)
{
	if (regex_match(email.c_str(), regular))
	{
		return true;
	}
	else
	{
		return false;
	}
}



int main()
{
	setlocale(LC_ALL, "Russian");
	User man_a;
	createFile();
	string email;
	int n;
	SetColor(10, 0);
	cout << "Укажите количество пользователей : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		SetColor(11, 0);
		cout << "Введите Имя " << i << "-го пользователя : ";
		cin >> man_a.Name;
		SetColor(12, 0);
		cout << "Введите Фамилию " << i << "-го пользователя : ";
		cin >> man_a.Lastname;
		while (true)
		{
			SetColor(9, 0);
			cout << "Введите E-mail " << i << "-го пользователя : ";
			cin >> email;
			if (validEmail(email))
			{
				man_a.email = email;
				break;
			}
		}
		SetColor(10, 0);
		cout << "Введите Пароль " << i << "-го пользователя : ";
		cin >> man_a.password;
		addFieldToFile(man_a);
	}
	SetColor(10, 0);
	cout << endl;
	readFile();
	SetColor(5, 0);
	cout << "Данные сохраненыв файл Point_Two.csv" << endl << endl;
	SetColor(7, 0);
	system("pause");
}
