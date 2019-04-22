//Дано натуральное число N.Определить S = (N)∑(i=1)i*s(i), где s(i) = { 1, если i — чётное, иначе −1. Проверку чётности i не использовать.
//Проверочные значения : 1) N = 7 ⇨ S = -4; 2) N = 10 ⇨ S = 5.
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int N, i, S = 0, n = 1;

	cout << "Введите натуральное число N: ";
	cin >> N;

	for (i = 1; i <= N; i++) {
		n = -n;
		S += i * n;
	}
	cout << "Значение S: " << S << endl;

	return 0;
}
