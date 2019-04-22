//Разработать, отладить, продемонстрировать и защитить преподавателю программу, использующую динамическое выделение памяти под массив,
//для решения следующей задачи: из заданного одномерного массива A[N] формирует новый массив B по  правилам, указанным  в  таблице  No8.2. 
//Если массив сформировать невозможно, вывести соответствующее сообщение.
//Задание:
//Заменить  все  нулевые  элементы, предшествующие первому отрицательному, единицей.
//поиск индекса первого отрицательного элемента массива оформить как функцию.
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

int find_negative_el(int N, int A[]);

int main(){
	setlocale(LC_ALL, "rus");

	int N, i, j;

	cout << "Введите размерность массива: ";
	cin >> N;

	int *A = new int[N];
	
	cout << "Введите массив A: ";
	for (i = 0; i < N; i++) {
		cin >> A[i];
	}

	int neg_el = find_negative_el(N, A);

	if (neg_el == -1) {
		cout << "\nОтрицательных элементов нет\n";
	}

	int *B = new int[N];

	for (i = 0, j = 0; i < N; i++) {
		if (i < neg_el && A[i] == 0) {
			B[j] = 1;
		}
		else B[j] = A[i];
		j++;
	}
	cout << "\nМассив B = {";
	for (j = 0; j < N; j++) {
		cout << " " << B[j];
	}
	cout << " }" << endl;
	return  0;
}

int find_negative_el(int N, int A[]) {
	int i;
	for (i = 0; i < N; i++) {
		if (A[i] < 0) {
			return i;
		}
	}
	return -1;
}
