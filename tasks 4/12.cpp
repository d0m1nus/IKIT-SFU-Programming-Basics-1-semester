//Даны целые числа x, y, sx, sy. Вывести прямоугольник из символов «@» с размерами sx по горизонтали, sy по вертикали,
//левый верхний угол которого находится в точке с координатами (x, y). Ось X направлена вправо, ось Y — вниз. 
//Вывод прямоугольника оформить как функцию void print_rect(int x, int y, int sx, int sy).
//Проверочные значения : x = 1, y = 2, sx = 3, sy = 4
#include "pch.h"
#include <iostream>
#include <clocale>
#include <string>

using namespace std;

void print_rect(int x, int y, int sx, int sy);

int main(){
	setlocale(LC_ALL, "rus");

	int x, y, sx, sy;

	cout << "Введите x: ";
	cin >> x;

	cout << "Введите y: ";
	cin >> y;

	cout << "Введите sx: ";
	cin >> sx;

	cout << "Введите sy: ";
	cin >> sy;
	
	print_rect(x, y, sx, sy);

	return 0;
}
void print_rect(int x, int y, int sx, int sy) {
	int i;
	for (i = 0; i < y; i++) {
		cout << endl;
	}
	for (i = 1; i <= sy; i++) {
		for (int k = 0; k < x; k++) {
			cout << " ";
		}
		for (int j = 1; j <= sx; j++) {
			cout << "@";
		}
		cout << endl;
	}
	return;
}
