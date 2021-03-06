//Дано натуральное число N (N < 1000). Определить, является ли оно автоаморфным.
//Автоаморфное число N равно последним разрядам квадрата этого числа: 5<->25, 6<->36, 25<->625. 
//Является ли число автоаморфным, оформить как функцию.
#include "pch.h"
#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

bool automorphic(int N);

int main(){
	setlocale(LC_ALL, "rus");

	int N, i = 1, digits;

	cout << "Введите натуральное число N: ";
	cin >> N;

	bool rezult = automorphic(N);

	if (rezult) {
		cout << "\nЧисло " << N << " автоморфное" << endl;
	}
	else {
		cout << "\nЧисло " << N << " не автоморфное" << endl;
	}
	
	return 0;
}

 bool automorphic(int N) {
	 int remainder, degree = pow(N, 2), div = 1, digits = 0, bufer = N;

	 for (; bufer > 0; digits++) {
		bufer /= 10;
	 }

	 for (int i = 0; i <= digits; i++) {

		 div *= 10;
		 remainder = degree % div;

		 if (N == remainder) {
			 return true;
		 }
	 }	
	 return false;
}