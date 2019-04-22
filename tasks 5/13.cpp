//Дано натуральное число N. Определить S=(N)∑(i=1)i/(i+1). Вычисление i/(i+1) оформить как функцию double ai(int i).
//Проверочные значения 1) N = 4 ⇨ S = 2, 72; 2) N = 9 ⇨ S = 7, 07.
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

double ai(int i);

int main(){
	setlocale(LC_ALL, "rus");

	double S = 0;
	int N, i;

	cout << "Введите натуральное число N: ";
	cin >> N;

	for (i = 1; i <= N; i++) {
		S += ai(i);
	}
	cout.precision(3);
	cout << "Значение S: " << S << endl;
}

double ai(int i) {
	return i / (i + 1.0);
}
