/** Сортировка - Прямое включение(insertion) без «барьера», упорядочить
по убыванию, вещественные числа. */


# include<iostream>
# include<cmath>
#include <conio.h>
#include <Windows.h>//Для вывода и ввода текста на русском
using namespace std;
int i, n, k;
void load(float* a, int n);
void print(float* a, int n);

int main() {
	float *a; //указатель на float
	setlocale(0, "");//Для вывода текста на русском
	cout << "Введите размерность массива\n"; cin >> n; //ввод размерности массива
													   //выделение памяти под массив из n вещественных элементов
	//a = (float *)malloc(n * sizeof(float));
	a = new float[n];
	cout << "Введите массив A \n";
	load(a,n);
	print(a,n);
	cout << "Press any key";
	_getch();
	return 0;
}

void load(float* a, int n) {
	
	//ввод элементов массива
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