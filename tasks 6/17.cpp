//Протабулировать функцию f(x)=5x+2 на отрезке [a;b] с шагом s. Вычисление f(x) оформить как функцию double f(double x).
//Результат вывести в виде горизонтальной таблицы из двух строк :
//1)x, ширина поля — 15 символов, точность(precision) — 3 знака, формат записи числа — фиксированный(ios_base::fixed).
//2)f(x), ширина поля — 15 символов, точность — 5 знаков, формат записи числа — научный(ios_base::scientific).
//Проверочные значения : a = 0, b = 0.1, s = 0.01
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
		
		cout.width(15);
		cout.precision(3);
		cout << fixed << i;
	}
	cout << "\n" << endl;

	for (i = a; i <= b; i += s) {

		cout.width(15);
		cout.precision(5);
		cout << scientific << f(i);
	}
	cout << endl;
	return 0;
}

double f(double x) {
	return 5 * x + 2;
}
