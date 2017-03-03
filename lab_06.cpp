/**Розробити алгоритм розв'язання задачі підсумовування ряда. Реалізувати алгоритм програмно на мові С++
двома способами: 1) за допомогою циклу з передумовою while та 2) за допомогою циклу з післяумовою 
do while. Передбачити введення даних (аргумент і точність) з клавіатури і виведення результатів 
(суми ряда) на екран. Порівняти отримане значення суми з точним значенням шляхом 
обчислення заданої функції 

*/


# include<iostream>
# include<cmath>
#include <conio.h>
#include <Windows.h>//Для вывода и ввода текста на русском
using namespace std;
void main() {
	float x,y_real;
	float y = 0.0, y_ = 0.0;
	unsigned int n = 1;
	unsigned int m = 1000000;
	int delta;
	setlocale(0, "");//Для вывода текста на русском
	cout << "Введите аргумент x=" << endl;
	cin >> x;
	cout << "и тоность округления delta=" << endl;
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

	cout << "точное значение y =" << y_real << endl;
	cout << "приблизительное y =" << y_ << endl;
	cout << "Press any key";
	_getch();
}