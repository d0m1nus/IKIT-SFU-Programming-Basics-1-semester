//Даны три точки заданы своими координатами. Определить принадлежат ли эти точки одной прямой. Значения x1, y1, x2, y2, x3, y3 вводятся с клавиатуры,
//на монитор выводится слово YES (если точки принадлежат) или NO (если точки не принадлежат прямой).
//Пример входных данных: x1 = 3, y1 = 2, x2 = 8, y2 = 3, x3 = 13, y3 = 4.
//Пример выходных данных: YES
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");

	float x1, x2, x3, y1, y2, y3;

	cout << "Введите x1:";
	cin >> x1;

	cout << "Введите y1:";
	cin >> y1;
	
	cout << "Введите x2:";
	cin >> x2;

	cout << "Введите y2:";
	cin >> y2;
	
	cout << "Введите x3:";
	cin >> x3;

	cout << "Введите y3:";
	cin >> y3;

	if (x1 == x2 && x1 == x3) {
		cout << "\nYES" << endl;
	}
	else if (y1 == y2 && y1 == y3) {
		cout << "\nYES" << endl;
	}
	else if ((x3 - x1) / (x2 - x1) == (y3 - y1) / (y2 - y1)) {
		cout << "\nYES" << endl;
	}
	else {
		cout << "\nNO" << endl;
	}
	return 0;
}