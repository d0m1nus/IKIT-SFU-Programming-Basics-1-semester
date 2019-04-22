//Определить расстояние d между двумя точками на числовой плоскости с координатами (x1, y1), (x2, y2). 
//Вычисление расстояния оформить как функцию float dist(float x1, float y1, float x2, float y2).
//Проверочные значения: x1 = 0, y1 = 1, x2 = 3,5, y2 = 0,5 ⇨ d≈3,54.
#include "pch.h"
#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

float dist(float x1, float y1, float x2, float y2);

int main() {
	setlocale(LC_ALL, "rus");

	float x1, x2, y1, y2, d;

    cout << "Введите x1: ";
	cin >> x1;

	cout << "Введите y1: ";
	cin >> y1;

	cout << "Введите x2: ";
	cin >> x2;

	cout << "Введите y2: ";
	cin >> y2;

	d = dist(x1, y1, x2, y2);

	cout.precision(3);
	cout << "\nРасстояние = " << d << endl;
}

float dist(float x1, float y1, float x2, float y2) {
	return sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
}
