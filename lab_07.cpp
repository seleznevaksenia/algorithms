/** ���������� - ������ ���������(insertion) ��� ��������, �����������
�� ��������, ������������ �����. */


# include<iostream>
# include<cmath>
#include <conio.h>
#include <Windows.h>//��� ������ � ����� ������ �� �������
using namespace std;
int main() {
	float x;
	int i, j, k, n;
	float *a; //��������� �� float
	setlocale(0, "");//��� ������ ������ �� �������
	cout << "������� ����������� �������\n"; cin >> n; //���� ����������� �������
	//��������� ������ ��� ������ �� n ������������ ���������
	a = (float *)malloc(n * sizeof(float));
	cout << "������� ������ A \n";
	//���� ��������� �������
	for (i = 0; i<n; i++)
	{
		cin >> *(a + i);
	}

	for (i = 1; i < n; i++)
	{
		x = a[i]; j = i;
		while ((j > 0) && (x > a[j - 1]))
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = x;
		cout << "\n" << i << " prochod" << endl;
		for (k = 0; k < n; k++)
		{
			cout << a[k] << " ";
		}
	}
	free(a);
	cout << "Press any key";
	_getch();
	return 0;
}