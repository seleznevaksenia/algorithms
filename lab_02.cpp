#include<iostream> //���������� �������� ��� �������� � ��������� �����
#include<math.h>	//���������� ����������� ��������
#include <string.h>
using namespace std; 	//������� �� ������ ����
void main()		//��������� ������� �������
{
	while (true) {
		double x, y, a;	//���� ����
		char answer;
		char b = 'y';
		cout << "x = ";	//��������� ������� ��� �������� �����
		cin >> x;		//�������� x
		cout << "a = ";	//��������� ������� ��� �������� �����
		cin >> a;					//�������� a
		if (a*x < 1) y = exp(pow((a*x), 2.0));	//���������� �� ��������
		else y = pow((a*x), 2.0);
		cout << "y = " << y;	//��������� ����������
		cout << endl;	//������� ������� ������ �����
		cout << "Do you want another solution?:y/n" << endl;	//��������� ������� ��� �������� �����
		cin >> answer;
		if (answer != b) return;
	}
}

