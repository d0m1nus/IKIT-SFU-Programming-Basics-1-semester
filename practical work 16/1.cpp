#include "pch.h"
#include <iostream>
#include <clocale>
#include <fstream>
#include <cstring>
#include <algorithm>

using namespace std;

// Чтение-запись массива из файла
void print_arr(int n, int m, fstream &fout) {
	int *buf = new int[m];
	fout.seekg(sizeof(int) * 2, ios_base::beg);
	for (int i = 0; i < n; i++) {
		cout << endl;
		fout.read((char *)buf, sizeof(int)*m);
		for (int j = 0; j < m; j++) {
			cout << " " << buf[j];
		}
	}
	delete[] buf;
}

// Сортировка массива методом выбора
void change_arr(int *arr, int m, int comp) {
	for (int i = 0; i < m; i++) {
		arr[i] = arr[i] * comp;
	}
}

int comp_arr(int *arr, int m) {
	int comp = 1;
	for (int i = 0; i < m; i++) {
		comp *= arr[i];
	}
	return comp;
}

int main() {
	setlocale(LC_ALL, "");

	fstream fout("out.txt", ios::binary | ios::in | ios::out);

	int n, m, k;
	fout.seekg(0, ios_base::beg); // Встаем на начало файла
	fout.read((char *)&n, sizeof(int)); // Чтение n
	fout.read((char *)&m, sizeof(int)); // Чтение m

	cout << "Содержимое файла до преобразований: ";
	print_arr(n, m, fout);
	cout << endl;

	cout << endl << "Введите значение k: ";
	cin >> k;

	if (k + 1 > n) {
		cout << endl << "Число k + 1 должно быть меньше либо равно n" << endl;
		return -1;
	}

	int *arr = new int[m];
	fout.seekg(sizeof(int)*m*k + sizeof(int) * 2, ios_base::beg); // Пропускаем 2 первых числа и встаем на нужную строку
	fout.read((char *)arr, sizeof(int)*m); // Читаем arr
	int comp = comp_arr(arr, m);
	cout << "Произведение всех чисел k+1 строки: " << comp << endl;

	fout.seekg(sizeof(int)*m*(k - 1) + sizeof(int) * 2, ios_base::beg); // Пропускаем 2 первых числа и встаем на нужную строку
	fout.read((char *)arr, sizeof(int)*m); // Читаем arr
	change_arr(arr, m, comp);
	cout << endl;

	cout << "Содержимое файла после преобзразований: ";
	fout.seekg(sizeof(int)*m*(k - 1) + sizeof(int) * 2, ios_base::beg); // Пропускаем 2 первых числа и встаем на нужную строку
	fout.write((char *)arr, sizeof(int)*m); // Пишем arr
	print_arr(n, m, fout);
	cout << endl;

	fout.close();
	return 0;
}
