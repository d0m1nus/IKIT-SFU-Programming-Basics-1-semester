#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int a, b;

	cout << "Введите a: ";
	cin >> a;

	cout << "Введите b: ";
	cin >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Число a: " << a << endl;
	cout << "Число b: " << b << endl;

	return 0;
}
