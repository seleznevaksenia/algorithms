/** Сортировка - Прямое включение(insertion) без «барьера», упорядочить
по убыванию, вещественные числа. */


# include<iostream>
# include<cmath>
#include <conio.h>
#include <Windows.h>//Для вывода и ввода текста на русском
using namespace std;
int main() {
	float x;
	int i, j, k, n;
	float *a; //указатель на float
	setlocale(0, "");//Для вывода текста на русском
	cout << "Введите размерность массива\n"; cin >> n; //ввод размерности массива
	//выделение памяти под массив из n вещественных элементов
	a = (float *)malloc(n * sizeof(float));
	cout << "Введите массив A \n";
	//ввод элементов массива
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