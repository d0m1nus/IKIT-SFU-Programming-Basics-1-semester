#include "pch.h"
#include <iostream>
#include <clocale>

void output_file(const int* const *A, int N);

int main() {
	setlocale(LC_ALL, "rus");

	int n;

	printf("Введите размерность массива: ");
	scanf_s("%d", &n);

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
	FILE *out;
	fopen_s(&out, "out.txt", "w");
		for (int i = 0; i < N; i++) {
		fprintf_s(out, "\n");
		for (int j = 0; j < N; j++) {
			fprintf_s(out, "%d ", A[i][j]);
		}
	}
	fprintf_s(out, "\n\n");
	fclose(out);
}