#include "pch.h"
#include <iostream>
#include <clocale>
#include <cstring>
#pragma warning(disable : 4996)
#include <windows.h>

using namespace std;

char *my_strncat(char *destptr, const char *srcptr, int num) {
	char* str = destptr;

	for (; *str; ++str)
		;
	for (; num > 0; *str++ = *srcptr++, --num)
		;

	*str = 0;

	return destptr;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, ".1251");

	int num;

	char *destptr = new char[255];
	cout << "Введите строку destptr: ";
	cin.getline(destptr, 255);

	char *destptr1 = new char[255];
	cout << "Введите строку destptr1: ";
	cin.getline(destptr1, 255);

	char *srcptr = new char[255];
	cout << "Введите строку srcptr: ";
	cin.getline(srcptr, 255);
	
	cout << "Введите количество символов num: ";
	cin >> num;

	cout << "\nАналоговая функция my_strncat: " << my_strncat(destptr, srcptr, num) << endl;
	cout << "Стандартная функция strncat: " << strncat(destptr1, srcptr, num) << endl;

	return 0;
}