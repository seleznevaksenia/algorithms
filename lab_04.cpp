/**6.	��������� ������� �������������� ������������� ��������� ������� Yk(k = 1, ..., 15).
������������� ������, ����� ������������� ������ - �� �����������.*/

# include<iostream>
# include<math.h>
#include <conio.h>
using namespace std;

void main()
{
	int y[15];
	float avarage = 0;
	int sum = 0;
	int i = 0, n = 0;
	cout << "Input elements of array\n";	//��������� ������� � ������ �����
	for (i = 0; i<15; i++)
	{
		cin >> y[i];
	}
	i = 0;
	while (i < 15)	//�������� �����
	{
		if (y[i] < 0) {
			sum += y[i];
				n++;
		}; //����������� ����
		i++;
	}
				//���� ��������� x �� �������� �����
	if (sum < 0) {
		avarage = (float)sum / n;
		cout << "arithmetical mean=" << avarage;	//��������� ���������� ������������
	}
	else cout << "all values are nonnegative";
	cout << endl;
	cout << "Press any key";
	_getch();//����������� �������� ����� ������ �����������

}
