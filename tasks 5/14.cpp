//Дано натуральное число N и действительное число x. Определить P=(N)∏(i=1)2*x^i. Функцию pow() не использовать.
//Проверочные значения : 1) N = 4, x = 2 ⇨ P = 16384; 2) N = 5, x = 1, 5 ⇨ P = 14012, 6.
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");

	int N;
	float x;

	cout << "Введите натуральное число N: ";
	cin >> N;

	cout << "Введите действительное число x: ";
	cin >> x;

	float P = 1, i, degree = 1;

	for (i = 1; i <= N; i++) {
		degree *= x;
		P *= 2 * degree;
	}

	cout << "Значение P: " << P << endl;	
}
