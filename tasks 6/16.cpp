//Протабулировать функцию f(x)=2x^2−3x+1 на отрезке [a;b] с шагом s. Вычисление f(x) оформить как функцию double f(double x).
//Результат вывести в виде вертикальной таблицы из двух столбцов :
//x, ширина поля — 10 символов, формат записи числа — фиксированный(ios_base::fixed).
//f(x), ширина поля — 15 символов, формат записи числа — научный(ios_base::scientific).
//Проверочные значения : a = 0, b = 0,1, s = 0,01
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

double f(double x);

int main(){
	setlocale(LC_ALL, "rus");

	double a, b, s, i;

	cout << "Введите начало отрезка a: ";
	cin >> a;

	cout << "Введите конец отрезка b: ";
	cin >> b;

	cout << "Введите шаг s: ";
	cin >> s;

	cout << endl;

	for (i = a; i <= b; i += s) {

		cout.width(10);
		cout << fixed << i;

		cout.width(15);
		cout << scientific << f(i) << endl;
	}
	return 0;
}

double f(double x) {
	return x = 2 * pow(x, 2) - 3 * x + 1;
}
