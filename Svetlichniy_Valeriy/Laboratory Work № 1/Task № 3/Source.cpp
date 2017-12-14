#include "iostream"
#include "string"

using namespace std;

int main()
{
	setlocale(LC_ALL,"Russian");
	char s1[15],s2[15];
	cout << "Введите слово № 1 : ";
	cin.getline(s1,15);
	cout << endl << "Введите слово № 1 : ";
	cin.getline(s2,15);
	char a[15] ;
	int f = 0;
	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 15; ++j)
			{
				if (s1[i] == s2[j])
				{
					a[f] = s1[i];
					f++;
				}
			}	
	}
	for (int f = 0; f < 15; ++f)
	{
		cout << a[f] << endl;
	}
	system("pause");
 	return 0;
}
