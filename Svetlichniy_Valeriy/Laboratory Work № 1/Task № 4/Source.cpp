#include "iostream"
#include "string.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char a[255], b[255], c[255];
	cout << "������� ��� ����� ����� Enter:" << endl;
	cin >> a >> b >> c;
	cout << "� ������ ����� " << strlen(a) << " �������� ; " << "�� ������ ����� : " << strlen(b) << " �������� ; " << " � ����� ����� : " << strlen(c) << " ��������." << endl;
	system("pause");
}
