//Дано натуральное число n. Сформировать двумерный массив A[n][n], заполнив его таким образом, чтобы на побочной диагонали были расположены числа от n до 1, 
//над побочной диагональю нули, а под побочной диагональю по строкам числа в порядке возрастания от заданного на побочной диагонали.
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

void output_array(int**A, int N, int M);

int main() {
	setlocale(LC_ALL, "rus");

	int n;

	cout << "Введите число n: ";
	cin >> n;

	int **A = new int *[n];

	for (int i = 0; i < n; i++) {
		A[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int k = j;
			if (i + j < n - 1) {
				A[i][j] = 0;
			}
			else {
				A[i][j] = ++k;
			}
		}
	}
	output_array(A, n, n);
	return 0;
}

void output_array(int**A, int N, int M) {
	for (int i = 0; i < N; i++) {
		cout << "\n";
		for (int j = 0; j < M; j++) {
			cout << " " << A[i][j];
		}
	}
	cout << "\n\n";
}
