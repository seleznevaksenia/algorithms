/** Сортировка - Прямое включение(insertion) без «барьера», упорядочить
по убыванию, вещественные числа. */


# include<iostream>
# include<cmath>
#include <conio.h>
#include <Windows.h>//Для вывода и ввода текста на русском
#include <iomanip>
#include <cstdlib>
using namespace std;
int i, n, m, k;
void load(int** a, int n, int m);
void print(int** a, int n, int m);

int main() {
	setlocale(0, "");//Для вывода текста на русском
	cout << "Введите размерность массива n\n";
	cin >> n; //ввод размерности массива
	cout << "Введите размерность массива m\n";
	cin >> m;
	// объявление двумерного динамического массива на n элементов:
	int **a = new int*[n]; // две строки в массиве
	for (int i = 0; i < n; i++)
		a[i] = new int[m]; // и пять столбцов
	load(a, n, m);
	print(a, n, m);
	cout << "Press any key";
	_getch();
	return 0;
}

void load(int** a, int n, int m) {

	//ввод элементов массива
	cout << "Введите элементы\n";
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
	// высвобождение памяти отводимой под двумерный динамический массив:
	for (i = 0; i < n; i++)
		delete[] a[i];
}