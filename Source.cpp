#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	
	int a, b, c;

	cout << "������� ������ �����: ";
	cin >> a;

	cout << "������� ������ �����: ";
	cin >> b;

	cout << "������� ������ �����: ";
	cin >> c;

	cout << "�� ����� ��������� �����: " << a << ", " << b << ", " << c << "." << endl;
	cout << "����� ���� ����� �����: " << a + b + c << endl;
	cout << "������������ ���� ����� �����: " << a * b * c << endl;
	cout << "������� �������������� ���� ����� �����: " << (double)(a + b + c) / 3 << endl;
}