//Протабулировать функцию f(x)=sin^2(πx) на отрезке [a;b] с шагом s. Вычисление f(x) оформить как функцию double f(double x). 
//Значение числа π для расчётов определить с помощью стандартной функции арккосинуса (std::acos()) и сохранить внутри функции f()
//в виде статической константы static const double pi.
//Результат вывести в виде псевдографика, определяемого уравнением : v = scale⋅f(a + su)
//где u — номер строки(счёт с 0), v — номер столбца(счёт с 0), scale — масштабный коэффициент.
//Каждому шагу табулирования соответствует одна строка.Точки графика выводятся символом «$».
//После символа «$» в скобках выводятся координаты точки(x, y).Начало координат находится в левом верхнем углу.
//Ось u направлена вниз, ось v — вправо.
//Проверочные значения : a = 0, b = 0.5, s = 0.02, scale = 100.
#include "pch.h"
#include <iostream>
#include <clocale>
#include <iomanip>

using namespace std;

double f(double x);

int main(){
	setlocale(LC_ALL, "rus");

	double a, b, s, i, u, v;
	double scale;

	cout << "Введите начало отрезка a: ";
	cin >> a;

	cout << "Введите конец отрезка b: ";
	cin >> b;

	cout << "Введите шаг s: ";
	cin >> s;

	cout << "Введите масштабный коэффициент scale: ";
	cin >> scale;

	for (i = a; i <= b; i += s) {
		cout.setf(ios::right);
		cout << setw(ceil(f(i) * scale)) << "$" << "(" << i << ", " << f(i) << ")" << endl;

	}
	return 0;
}

double f(double x) {
	static const double pi = acos(-1);
	return pow(sin(pi*x), 2);
}
