//Разработать программу, решающую следующую  задачу : на основе исходных целочисленных массивов Х[n] и Y[m] 
//сформировать массив C по правилам, заданным в таблице No 10.3, полученный массив отсортировать по убыванию. 
//Провести анализ разработанной программы согласно критериям качества.
//Из расстояний от начала координат до точек, координаты которых являются элементами массивов X и Y – : 
//(x1, y1), ..., (xn, yn) (n ≤ 30, m = n).
//найти и напечатать координаты точки, для которой угол между осью абсцисс и лучом, соединяющим начало координат с точкой,
//минимальный(считать,что такая точка одна).
#include "pch.h"
#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

void input_array(float *arr, int n);
float min_angle_index(const float *X, const float *Y, int n);
float angle(float y, float x);

static const double pi = acos(-1);

int main(){
	setlocale(LC_ALL, "rus");

	int n, i = 0;

	cout << "Введите размерность массива n: ";
	cin >> n;

	if (n <= 30) {
		float *X = new float[n];
		float *Y = new float[n];
		float *C = new float[n];

		cout << "Введите массив X: ";
		input_array(X, n);

		cout << "Введите массив Y: ";
		input_array(Y, n);

		for (int i = 0; i < n; i++) {
			C[i] = sqrt(pow(X[i], 2) + pow(Y[i], 2));
		}

		for (int i = 1; i < n; i++) {
			for (int j = 0; j < n - i; j++) {
				if (C[j] < C[j + 1]) {
					float temp = C[j];
					C[j] = C[j + 1];
					C[j + 1] = temp;
				}
			}
		}
		cout << "\nМассив C = {";
		for (int i = 0; i < n; i++) {
			cout << " " << C[i];
		}
		cout << " }" << endl;

		float min_index = min_angle_index(X, Y, n);

		for (int i = 0; i < n; i++) {
			if (min_index == i) {
				cout << "Точка для которой угол минимален: (" << X[i] << ", " << Y[i] << ")" << endl;
			}
		}
	}
	else {
		cout << "\nРазмерности не должны превышать 30" << endl;
	}
	return 0;
}
void input_array(float *arr, int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}
float angle(float y, float x) {
	float temp_angle = atan2(y, x);
	if (temp_angle < 0) {
		temp_angle = 2 * pi + temp_angle;
	}
	return temp_angle;
}
float min_angle_index(const float *X, const float *Y, int n) {
	int angle_index = 0;
	double min_angle = 2 * pi, temp_angle;
	for (int i = 0; i < n; i++) {
		temp_angle = angle(Y[i], X[i]);
		if (temp_angle < min_angle) {
			min_angle = temp_angle;
			angle_index = i;
		}
	}
	return angle_index;
}
