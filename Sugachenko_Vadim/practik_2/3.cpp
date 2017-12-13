#include <iostream>

using namespace std;

void input(int *a, const int size)
{
	for (int i=0; i < size; i++)
	{
		cin >> a[i];
	}

}

int min_element(const int *a, const int size)
{
	int min = a[0];
	for (int i=1; i < size; i++)
	{
		if (a[i] < min)
		min = a[i];
	}
	return min;
}

int main()
{
	setlocale(LC_ALL,"Russian");
	cout << "������� �������� ������ ��������� �� 10 ��������� : " << endl;
	const int size = 10;
	int arr[size];
	input(arr, size);
	cout << "����������� ������� ������ : " << min_element(arr, size) << endl;
	system("pause");
}
