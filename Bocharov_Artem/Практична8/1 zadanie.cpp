#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string i;
	char f1[] = "F1.txt";
	char f2[] = "F2.txt";
	char g[] = "g.txt";

	// 1) ������ �� 1-�� � ����-��� ����
	{
		fstream vuvod(f1, ios::in);
		fstream vvod(g, ios::out);
		while (!vuvod.eof())
		{
			getline(vuvod, i);
			vvod << i << '\n';
			i == i.erase(i.size());
		}
		vuvod.close();
		vvod.close();
	}	
	// 2) �������� �� 2-�� 1-� ����
	{
		fstream vuvod(f2, ios::in);
		fstream vvod(f1, ios::out);
		while (!vuvod.eof())
		{
			getline(vuvod, i);
			vvod << i << '\n';
			i == i.erase(i.size());
		}
		vuvod.close();
		vvod.close();
	}
	// 3) �������� �� ����-��� 2-� ����
	{
		fstream vuvod(g, ios::in);
		fstream vvod(f2, ios::out);
		while (!vuvod.eof())
		{
			getline(vuvod, i);
			vvod << i << '\n';
			i == i.erase(i.size());
		}
		vuvod.close();
		vvod.close();
	}
	system("pause");
	return 0;
}
