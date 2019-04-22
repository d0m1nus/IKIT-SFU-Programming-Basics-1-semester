//Даны числа a, b, c, d, которые могут быть равны 0 или 1. Определить, какое число встречается чаще. 
//Алгоритм определения оформить как функцию int find_most_frequent(int a, int b, int c, int d).
//Функция должна возвращать: 0, если 0 встречается чаще; 1, если 1 встречается чаще; -1, если 0 и 1 встречаются одинаково часто.
//Проверочные значения : 1) a = 0, b = 1, c = 1, d = 1 ⇨ 1; 2) a = 0, b = 0, c = 0, d = 1 ⇨ 0; 3) a = 0, b = 1, c = 1, d = 0 ⇨ −1.
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

int find_most_frequent(int a, int b, int c, int d);

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, d;

	cout << "Введите a: ";
	cin >> a;

	cout << "Введите b: ";
	cin >> b;

	cout << "Введите c: ";
	cin >> c;

	cout << "Введите d: ";
	cin >> d;

	cout << "\n " << find_most_frequent(a, b, c, d) << endl;
}

int find_most_frequent(int a, int b, int c, int d) {
	int sum = a + b + c + d;
	if (sum < 2) {
		return 0;
	}
	else if (sum > 2) {
		return 1;
	}
	return -1;
}
