/** ���������� - ������ ���������(insertion) ��� ��������, �����������
�� ��������, ������������ �����. */


# include<iostream>
# include<cmath>
#include <conio.h>
#include <Windows.h>//��� ������ � ����� ������ �� �������
using namespace std;
int i, n, k;
void load(float* a, int n);
void print(float* a, int n);

int main() {
	float *a; //��������� �� float
	setlocale(0, "");//��� ������ ������ �� �������
	cout << "������� ����������� �������\n"; cin >> n; //���� ����������� �������
													   //��������� ������ ��� ������ �� n ������������ ���������
	//a = (float *)malloc(n * sizeof(float));
	a = new float[n];
	cout << "������� ������ A \n";
	load(a,n);
	print(a,n);
	cout << "Press any key";
	_getch();
	return 0;
}

void load(float* a, int n) {
	
	//���� ��������� �������
	for (i = 0; i<n; i++)
	{
		cin >> *(a + i);
	}

}

void print(float* a, int n) {
	for (k = 0; k < n; k++)
	{
		cout << a[k] << " ";
	}
	delete[] a;
}