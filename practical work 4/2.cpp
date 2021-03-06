//Разработать, отладить, продемонстрировать и защитить преподавателю программу, которая для произвольного числа x, введенного с клавиатуры, 
//вычисляет значение y по следующей формуле: y = f1(x) + f2(x),
//Где f1(x) и f2(x) вычисляются по формулам : ³√30sinx², 2x + 2.7 * 105, f1(x) и f2(x) оформить как функции.
#include "pch.h"
#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

float f1(float x);

float f2(float x);

int main(){
	setlocale(LC_ALL, "");

	float x;

	cout << "Введите число x: ";
	cin >> x;

	cout.precision(15);
	cout << "Значение y: " << f1(x) + f2(x) << endl;
	return 0;
}

float f1(float x) {
	return cbrt(30. * sin(x*x));
}

float f2(float x) {
	return pow(2, x) + 2.7e5;
}