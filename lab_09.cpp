/** ���������� - ������ ���������(insertion) ��� ��������, �����������
�� ��������, ������������ �����. */


# include<iostream>
# include<cmath>
#include <conio.h>
#include <Windows.h>//��� ������ � ����� ������ �� �������
#include <iomanip>
#include <cstdlib>
using namespace std;
int i, n, m, k;
void load(int** a, int n, int m);
void print(int** a, int n, int m);

int main() {
	setlocale(0, "");//��� ������ ������ �� �������
	cout << "������� ����������� ������� n\n";
	cin >> n; //���� ����������� �������
	cout << "������� ����������� ������� m\n";
	cin >> m;
	// ���������� ���������� ������������� ������� �� n ���������:
	int **a = new int*[n]; // ��� ������ � �������
	for (int i = 0; i < n; i++)
		a[i] = new int[m]; // � ���� ��������
	load(a, n, m);
	print(a, n, m);
	cout << "Press any key";
	_getch();
	return 0;
}

void load(int** a, int n, int m) {

	//���� ��������� �������
	cout << "������� ��������\n";
	for (k = 0; k < n; k++) {
		for (i = 0; i < m; i++)
		{
			cin >> a[k][i];
		}
	}

}

void print(int** a, int n, int m) {

	for (k = 0; k < n; k++) {
		for (i = 0; i < m; i++)
		{
			cout << setw(4) << setprecision(2) << a[k][i]; cout << " ";
		}
		cout << endl;
	}
	// ������������� ������ ��������� ��� ��������� ������������ ������:
	for (i = 0; i < n; i++)
		delete[] a[i];
}