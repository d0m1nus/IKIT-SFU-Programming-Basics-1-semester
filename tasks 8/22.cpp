//Написать функцию void print_array(int arr[], int len), которая выводит на экран первые len элементов массива arr.
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

void print_array(int *arr, int len);

int main() {
	setlocale(LC_ALL, "rus");
	int n, len;

	cout << "Введите размерность массива n: ";
	cin >> n;

	cout << "Введите число len: ";
	cin >> len;

	int *arr = new int[n];

	cout << "Введите массив arr: ";

	for (int *B = arr; B < arr + n; B++) {
		cin >> *B;
	}
	print_array(arr, len);
	return 0;
}

void print_array(int *arr, int len) {
	cout << "\nПервые " << len << " элементов массива arr = {";
	for (int *B = arr; B < arr + len; B++) {
		cout << " " << *B;
	}
	cout << "}" << endl;
}
