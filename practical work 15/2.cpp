//Определить сумму элементов k-ой строки матрицы, расположенных между первым и вторым отрицательными элементами этой строки.
//Значение k(k ≤ N) вводится с клавиатуры. Если таких элементов нет, то вывести соответствующее сообщение.
#include "pch.h"
#include <iostream>
#include <fstream>
#include <clocale>
#include <cstring>

using namespace std;

void read_write_arr(int n, int m, ifstream &fin, fstream &fout);
int first_neg_el(const int *arr, int m);
int second_neg_el(const int *arr, int first_el, int m);
int sum_el(const int *arr, int first_el, int second_el);

int main() {
	setlocale(LC_ALL, "");

	int n, m, k;

	ifstream fin("in.txt", ios::in);
	fstream fout("out.txt", ios::binary | ios::in | ios::out);
	if (!fin.is_open()) {
		cout << "Невозможно открыть файл " << "\n";
		return 0;
	}

	fin >> n >> m;
	cout << "Значение n в файле: " << n << endl;
	cout << "Значение m в файле: " << m << endl;
	fout.write((char *)&n, sizeof(int));
	fout.write((char *)&m, sizeof(int));

	cout << "\nМатрица в файле: " << endl;
	int *arr = new int[m];
	read_write_arr(n, m, fin, fout);

	cout << "\nВведите номер строки матрицы: ";
	cin >> k;

	if (k > n) {
		cout << "\nВведённый номер строки превышает количество строк массива, попробуйте снова" << endl;
		return 0;
	}
	
	fout.seekg(sizeof(int)*m*(k - 1) + sizeof(int)*2, ios_base::beg);
	fout.read((char *)arr, sizeof(int)*m);
	int first_el = first_neg_el(arr, m);

	fout.seekg(sizeof(int)*m*(k - 1) + sizeof(int)*2, ios_base::beg);
	int second_el = second_neg_el(arr, first_el, m);
	
	if (first_el == -1 || second_el == -1) {
		cout << "\nНеобходимых отрицательных элементов нет" << endl;
		return 0;
	}

	cout << endl << "Первый отрицательный элемент k-той строки = " << arr[first_el] << endl;
	cout << endl << "Второй отрицательный элемент k-той строки = " << arr[second_el] << endl;

	fout.seekg(sizeof(int)*m*(k - 1) + sizeof(int) * 2, ios_base::beg);
	int sum = sum_el(arr, first_el, second_el);
	cout << endl << "Сумма элементов k-той строки, расположенных между первым и вторым отрицательным элементами = " << sum << endl;
	
	fin.close();
	fout.close();
}

void read_write_arr(int n, int m, ifstream &fin, fstream &fout) {
	int *buf = new int[m];
	for (int i = 0; i < n; i++) {
		cout << endl;
		for (int j = 0; j < m; j++) {
			fin >> buf[j];
			cout << " " << buf[j];
		}
		fout.write((char *)buf, sizeof(int)*m);
	}
	cout << endl;
	delete [] buf;
}
int first_neg_el(const int *arr, int m) {
	for (int i = 0; i < m; i++) {
		if (arr[i] < 0) {
			return i;
		}
	}
	return -1;
}
int second_neg_el(const int *arr, int first_el, int m) {
	for (int i = first_el + 1; i < m; i++) {
		if (arr[i] < 0) {
			return i;
		}
	}
	return -1;
}
int sum_el(const int *arr, int first_el, int second_el) {
	int sum = 0;
	for (int i = first_el + 1; i < second_el; i++) {
		sum += arr[i];
	}
	return sum;
}
