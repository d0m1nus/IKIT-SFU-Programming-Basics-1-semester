#include "pch.h"
#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int d;
	float x;

	cout << "Введите число x: ";
	cin >> x;

	x = abs(x) * 10;
	d = int(floor(x)) % 10;

	cout << "Первая десятичная дробь числа = " << d << endl;
	return 0;
}
