//Разработать графическую схему алгоритма и написать программу, которая для произвольного числа x, вводимого с клавиатуры, 
//вычисляет значение y по следующей формуле: y = f1(x) + f1(x²) + f2(x) + f2(x - 1), где f1(x) = x + 3.14; f2(x) = √(x² + 2)
//Вычисление f1(x) и f2(x) оформить как функции.
#include "pch.h"
#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

float f1(float x);
float f2(float x);

int main() {
	setlocale(LC_ALL, "rus");

	float x;

	cout << "Введите число x: ";
	cin >> x;

	cout.precision(5);
	cout << "Значение y: " << f1(x) + f1(pow(x, 2)) + f2(x) + f2(x - 1) << endl;

	return 0;
}

float f1(float x) {
	return x + 3.14;
}

float f2(float x) {
	return sqrt(pow(x, 2) + 2);
}
