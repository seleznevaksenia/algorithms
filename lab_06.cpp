/**��������� �������� ����'������ ������ ������������� ����. ���������� �������� ��������� �� ��� �++
����� ���������: 1) �� ��������� ����� � ����������� while �� 2) �� ��������� ����� � ���������� 
do while. ����������� �������� ����� (�������� � �������) � ��������� � ��������� ���������� 
(���� ����) �� �����. �������� �������� �������� ���� � ������ ��������� ������ 
���������� ������ ������� 

*/


# include<iostream>
# include<cmath>
#include <conio.h>
#include <Windows.h>//��� ������ � ����� ������ �� �������
using namespace std;
void main() {
	float x,y_real;
	float y = 0.0, y_ = 0.0;
	unsigned int n = 1;
	unsigned int m = 1000000;
	int delta;
	setlocale(0, "");//��� ������ ������ �� �������
	cout << "������� �������� x=" << endl;
	cin >> x;
	cout << "� ������� ���������� delta=" << endl;
	cin >> delta;
	while (n <= m) {
		y += (float)pow(x,n) / n;
		n++;
	}
	y = round(y * pow(10, delta)) / pow(10., delta);
	cout << "while=" << y << endl;
	n = 1;
	do {
		y_ += (float)pow(x, n) / n;
		n++;
	} while (n < m);
	y_ = round(y_ * pow(10, delta)) / pow(10., delta);
	cout << "while/do=" << y_ << endl;

	y_real = exp(1-x);
	y = round(y_real * pow(10, delta)) / pow(10., delta);

	cout << "������ �������� y =" << y_real << endl;
	cout << "��������������� y =" << y_ << endl;
	cout << "Press any key";
	_getch();
}