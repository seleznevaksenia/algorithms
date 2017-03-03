/*6.	Получить квадратную матрицу порядка n:  */
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void main()
{
	int i, m, n;
	cout << "i=";
	cin >> i;
	cout << "\n";
	for (n = 1; n <= i; n++) {
		for (m = 1; m <= i; m++) {
			if (m >= 10 && n >= 10 || n<10)
				cout << "1/" << m << "!^" << n << "  ";
			if (m < 10 && n >= 10)
				cout << "1/" << m << "!^" << n << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	cout << "Press any key";
	_getch();//организация задержки после вывода результатов

}

