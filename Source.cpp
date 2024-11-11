#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	
	int a, b, c;

	cout << "Введите первое число: ";
	cin >> a;

	cout << "Введите второе число: ";
	cin >> b;

	cout << "Введите третье число: ";
	cin >> c;

	cout << "Вы ввели следующие числа: " << a << ", " << b << ", " << c << "." << endl;
	cout << "Сумма этих чисел равна: " << a + b + c << endl;
	cout << "Произведение этих чисел равно: " << a * b * c << endl;
	cout << "Среднее арифметическое этих чисел равно: " << (double)(a + b + c) / 3 << endl;
}