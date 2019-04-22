#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	float a, b, c, d, x;

	cout << "Введите a: ";
	cin >> a;

	cout << "Введите b: ";
	cin >> b;

	cout << "Введите c: ";
	cin >> c;

	cout << "Введите d: ";
	cin >> d;

	cout << "Введите x: ";
	cin >> x;

	if (x >= a && x <= b || x >= c && x <= d) {
		cout << "X принадлежит объединению отрезков [a; b], [c; d]" << endl;
	}
	else {
		cout << "\nX не принадлежит объединению" << endl;
	}
	return 0;
}
