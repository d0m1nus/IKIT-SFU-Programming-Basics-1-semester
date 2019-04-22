//Написать функцию int count_equal(int arr[], int len, int x), которая возвращает число элементов массива arr[] размера len, равных x.
//Проверочные значения : arr1[] = { 1, 2, 3, 4, 3, 2, 2, 1 }, x = 2 ⇨ 3.
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

int count_equal(int arr[], int len, int x);

int main(){
	setlocale(LC_ALL, "rus");

	int len, x, n;

	cout << "Введите число len: ";
	cin >> len;

	cout << "Введите число x: ";
	cin >> x;

	int *arr = new int[len];

	cout << "Введите массив arr: ";

	for (int i = 0; i < len; i++) {
		cin >> arr[i];
	}

	cout << "\nКоличество элементов массива равных x: " << count_equal(arr, len, x) << endl;

	return 0;
}

int count_equal(int arr[], int len, int x) {
	int k = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] == x) {
			k++;
		}
	}
	return k;
}
