//Разработать программу, использующую для обращения к элементам массива указатели для решения следующей задачи:
//из заданного одномерного массива A[N] формируется новый массив B по правилам,
//указанным в таблице №8.2 предыдущей практической работы. Если массив сформировать не возможно, вывести соответствующее сообщение.
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

int find_negative_el(int N, const int *A);

int main() {
	setlocale(LC_ALL, "rus");

	int N, i;

	cout << "Введите размерность массива: ";
	cin >> N;

	int *A = new int[N];
	int *ptr1, *ptr2;

	cout << "Введите массив A: ";
	for (ptr1 = A; ptr1 < A + N; ptr1++) {
		cin >> *ptr1;
	}

	int neg_el = find_negative_el(N, A);

	if (neg_el == -1) {
		cout << "\nОтрицательных элементов нет\n";
	}

	int *B = new int[N];

	for (ptr1 = A, ptr2 = B, i = 0; ptr1 < A + N; ptr1++, i++) {
		if (i < neg_el && *ptr1 == 0) {
			*ptr2 = 1;
		}
		else {
			*ptr2 = *ptr1;
		}
		ptr2++;
	}

	cout << "\nМассив B = {";
	for (ptr2 = B; ptr2 < B + N; ptr2++) {
		cout << " " << *ptr2;
	}
	cout << " }" << endl;
	
	return  0;
}

int find_negative_el(int N, const int *A) {
	const int *B;
	int i = 0;
	for (B = A; B < A + N; B++, i++) {
		if (*B < 0) {
			return i;
		}
	}	
	return -1;
}
