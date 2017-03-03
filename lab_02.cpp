#include<iostream> //підключення бібліотеки для введення і виведення даних
#include<math.h>	//підключення математичної бібліотеки
#include <string.h>
using namespace std; 	//вказівка на простір імен
void main()		//заголовок головної функції
{
	while (true) {
		double x, y, a;	//дійсні змінні
		char answer;
		char b = 'y';
		cout << "x = ";	//виведення підказки для введення даних
		cin >> x;		//введення x
		cout << "a = ";	//виведення підказки для введення даних
		cin >> a;					//введення a
		if (a*x < 1) y = exp(pow((a*x), 2.0));	//обчислення за формулою
		else y = pow((a*x), 2.0);
		cout << "y = " << y;	//виведення результату
		cout << endl;	//вставка символу нового рядка
		cout << "Do you want another solution?:y/n" << endl;	//виведення підказки для введення даних
		cin >> answer;
		if (answer != b) return;
	}
}

