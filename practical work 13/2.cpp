//Дано натуральное число n. Сформировать двумерный массив A[n][n], заполнив его таким образом, чтобы на главной диагонали были расположены числа от n до 1, 
//под главной диагональю нули, а над главной диагональю по строкам числа в порядке возрастания от заданного на главной диагонали.
#include "pch.h"
#include <iostream>
#include <clocale>
#include <fstream>

using namespace std;

void output_file(const int* const *A, int N);

int main(){
	setlocale(LC_ALL, "rus");

	int n;

	cout << "Введите размерность массива: ";
	cin >> n;

	int **A = new int *[n];

	for (int i = 0; i < n; i++) {
		A[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		int k = n;
		for (int j = 0; j < n; j++) {
			if (i > j) {
				A[i][j] = 0;
			}
			else if (i == j) {
				A[i][j] = k;
			}
			else if (i < j) {
				A[i][j] = A[i][j - 1] + 1;
			}
			k--;
		}
	}
	output_file(A, n);

	return 0;
}

void output_file(const int* const *A, int N) {
	ofstream out("out.txt");
	for (int i = 0; i < N; i++) {
		out << "\n";
		for (int j = 0; j < N; j++) {
			out << " " << A[i][j];
		}
	}
	out << "\n\n";
	out.close();
}
