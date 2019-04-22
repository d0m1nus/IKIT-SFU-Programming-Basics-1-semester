//Разработать графическую схему алгоритма и программу, которая для заданного натурального числа N, выведет в столбик все числа от 1 до N.
//В программе предусмотреть три варианта использования операторов цикла: со счетчиком, с предусловием и постусловием.
#include "pch.h"
#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");

	int i = 1, k = 1, N;
	
	cout << "Введите число N: ";
	cin >> N;

	while (i <= N) {
		cout << " " << i++ << endl;
	}
	cout << endl;

	do {
		cout << " " << k++ << endl;
	} while (k <= N);
	cout << endl;

	for (i = 1; i <= N; i++) {
		cout << " " << i << endl;
	}
	
	return 0;
}
