// Дано целое число s. Вывести диагональную линию из символов «*» из левого верхнего угла в области из s строк и s столбцов.
//Вывод линии оформить как функцию void print_diag(int s).
//Проверочные значения : s = 5
#include "pch.h"
#include <iostream>
#include <clocale>
#include <string>

using namespace std;

void print_diag(int s);

int main(){
	setlocale(LC_ALL, "rus");

	int s;
	
	cout << "Введите s: ";
	cin >> s;

	print_diag(s);

	return 0;
}
void print_diag(int s) {
	for (int i = 1; i <= s; i++) {
		cout.width(i);
		cout << "*" << endl;
	}
	return;
}
