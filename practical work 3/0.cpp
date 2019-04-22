//Разработать программу, которая для двух целых чисел, введенных с клавиатуры,
//вычисляет остаток от целочисленного деления, частное от целочисленного деления первого числа на второе, 
//а также частное от вещественного деления.
//Провести трассировку программы с помощью встроенного в среду программирования отладчика,
//анализируя значения переменных после каждого оператора присваивания.
//Выполнить несколько запусков программы для заранее подготовленных тестовых наборов данных.
//Сделать вывод результатов с применением потокового ввода-вывода, используя следующие методы потоков – width(),
//precision() и fill() с различными параметрами (не менее 3 для каждого метода), а также флаги left, right, устанавливаемые с помощью метода setf().
//Проанализировать полученные результаты
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

int main(){
	setlocale(LC_ALL, "rus");

	int num1, num2, mod, div_int;
	float div_float;

	cout << "Введите первое число: ";
	cin >> num1;

	cout << "Введите второе число: ";
	cin >> num2;

	if (num2 != 0) {
		mod = num1 % num2;
		div_int = num1 / num2;
		div_float = float(num1) / float(num2);

		cout.setf(ios::fixed);
		cout.setf(ios::left);
		cout.width(25);
		cout.precision(2);
		cout.fill('*');
		cout << "Остаток от деления: " << mod << endl;

		cout.setf(ios::fixed);
		cout.setf(ios::left);
		cout.width(30);
		cout.precision(4);
		cout.fill('*');
		cout << "Остаток от деления: " << mod << endl;

		cout.setf(ios::fixed);
		cout.setf(ios::left);
		cout.width(35);
		cout.precision(6);
		cout.fill('*');
		cout << "Остаток от деления: " << mod << endl;

		cout.setf(ios::fixed);
		cout.setf(ios::left);
		cout.width(50);
		cout.precision(7);
		cout.fill('#');
		cout << "Частное от целочисленного деления : " << div_int << endl;

		cout.setf(ios::fixed);
		cout.setf(ios::left);
		cout.width(55);
		cout.precision(9);
		cout.fill('#');
		cout << "Частное от целочисленного деления : " << div_int << endl;

		cout.setf(ios::fixed);
		cout.setf(ios::left);
		cout.width(60);
		cout.precision(11);
		cout.fill('#');
		cout << "Частное от целочисленного деления : " << div_int << endl;

		cout.setf(ios::fixed);
		cout.setf(ios::right);
		cout.width(75); 
		cout.precision(5);
		cout.fill('$');
		cout << "Частное от вещественного деления : " << div_float << endl;

		cout.setf(ios::fixed);
		cout.setf(ios::right);
		cout.width(80);
		cout.precision(8);
		cout.fill('$');
		cout << "Частное от вещественного деления : " << div_float << endl;

		cout.setf(ios::fixed);
		cout.setf(ios::right);
		cout.width(85);
		cout.precision(12);
		cout.fill('$');
		cout << "Частное от вещественного деления : " << div_float << endl;
	}
	else {
		cout << "Произошла ошибка в вычислениях" << endl;
	}
	 	return 0;
}
