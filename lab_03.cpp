# include<iostream>
# include<math.h>
#include <conio.h>
using namespace std;


/*��������� ������� ���䒺���� � ������� �������� ������� ������� y = exp(x / 3),
���� x ��������� �� xn �� xk � ������ dx.*/
void main()
{
	double x, y, sum, k, xn, xk, dx;
	cout << "\n xn =";	//��������� ������� � ������ �����
	cin >> xn;		//�������� ����������� �������� x
	cout << "\n xk = ";	//��������� ������� � ������ �����
	cin >> xk;		//�������� �������� �������� x
	cout << "\n dx = ";
	cin >> dx;		//�������� ����� ���� x
	x = xn;			//������������ x ����������� ��������
	k = 1.0;			//������������ ������� k
	sum = 0;			// ������������ ���� s
	while (x <= xk)	//�������� �����
	{
		y = exp(x / 3);	//���������� �������� �������
		cout << "\n y = " << y;	//�������� ��������� �������� ������� y
		if (y >= 0) {
			k *= y; //����������� �������
			if (y > 0) {
				sum += y;//����������� ����
			}
		}
		x += dx;			//���� ��������� x �� �������� �����
	}
	cout << "\n sum = " << sum;		//��������� ����
	cout << "\n k = " << k;	//��������� �������
	cout << endl;
	cout << "Press any key";
	_getch();//����������� �������� ����� ������ �����������

}
