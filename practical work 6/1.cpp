//Разработать программу, решающую следующую задачу: дано натуральное число n, для n первых членов ряда вычислить :
//P = (n + 1/pow(n, 2))
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int i, n;
	float P = 1;

	cout << "Введите n: ";
	cin >> n;

	for (i = 1; i <= n; i++) {
		P *= i + 1 / pow(i, 2);
	}
	cout << "Произведение ряда равно: " << P << endl;
	return 0;
}
