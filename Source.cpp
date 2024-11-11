#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	
	int a, b, c;

	cout << "Enter the first number: ";
	cin >> a;

	cout << "Enter the second number: ";
	cin >> b;

	cout << "Enter the third number: ";
	cin >> c;

	cout << "The folowing numbers were derived: " << a << ", " << b << ", " << c << "." << endl;
	cout << "The sum of these numbers is: " << a + b + c << endl;
	cout << "The product of these numbers is: " << a * b * c << endl;
	cout << "The arifmetic mean of these numbers is: " << (double)(a + b + c) / 3 << endl;
}