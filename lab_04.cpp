/**6.	Вычислить среднее арифметическое отрицательных элементов массива Yk(k = 1, ..., 15).
Предусмотреть случай, когда отрицательные элемен - ты отсутствуют.*/

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
	cout << "Input elements of array\n";	//виведення підказки з нового рядка
	for (i = 0; i<15; i++)
	{
		cin >> y[i];
	}
	i = 0;
	while (i < 15)	//оператор циклу
	{
		if (y[i] < 0) {
			sum += y[i];
				n++;
		}; //накопичення суми
		i++;
	}
				//зміна аргументу x на величину кроку
	if (sum < 0) {
		avarage = (float)sum / n;
		cout << "arithmetical mean=" << avarage;	//виведення середнього арифетичного
	}
	else cout << "all values are nonnegative";
	cout << endl;
	cout << "Press any key";
	_getch();//организация задержки после вывода результатов

}
