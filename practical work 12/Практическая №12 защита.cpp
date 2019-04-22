#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

float *array_formation(int **arr, int n) {
	float *new_arr = new float[n];

	float average, number;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			++*new_arr = arr[j][i];
		}
	}
	return new_arr;
}

int main() {
	setlocale(LC_ALL, "");

	int n;

	cout << "Введите размерность массива: ";
	cin >> n;

	int **arr = new int *[n];

	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}
	
	for (int i = 0; i < n; i++) {
		cout << "\n";
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	float *new_arr = array_formation(arr, n);
	cout << "\n\nНовый массив: ";
	for (int i = 0; i < n; i++) {
		cout << " " << new_arr[i];
	}
	cout << endl;
	return 0;
}