#include "pch.h"
#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");

	float a, b, c, x, x1, x2;
	double D;

	cout << "Введите a: ";
	cin >> a;

	cout << "Введите b: ";
	cin >> b;

	cout << "Введите c: ";
	cin >> c;

	D = (pow(b, 2) - 4*(a * c));

	if (D > 0) {
		x1 = (-b - sqrt(D)) / (2 * a);
		x2 = (-b + sqrt(D)) / (2 * a);
		cout << "Корень x1 = " << x1 << endl;
		cout << "Корень x2 = " << x2 << endl;

		cout << "Проверка с корнем x1 = " << a * pow(x1, 2) + b * x1 + c << endl;
		cout << "Проверка с корнем x2 = " << a * pow(x2, 2) + b * x2 + c << endl;

	} else if (D == 0) {
		x = -b / (2 * a);
		cout << "x = " << x << endl;
		cout << "Проверка с корнем x = " << a * pow(x, 2) + b * x + c << endl;
	} else {
		cout << "Нет корней!" << endl;
	}
	return 0;
}
