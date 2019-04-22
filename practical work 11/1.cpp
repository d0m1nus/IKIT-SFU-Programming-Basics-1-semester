//Заменить в строке каждую цифру на следующую за ней по порядку цифру. Цифру 9 заменить цифрой 0.
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

void string_conversion(char *line);

int main() {
	setlocale(LC_ALL, "");

	char line[255];

	cout << "Введите строку символов: ";
	cin >> line;

	string_conversion(line);
	cout << line;
	return 0;
}

void string_conversion(char *line) {
	for (int i = 0; line[i] != '\0'; i++) {
		if (line[i] == '9') {
			line[i] = '0';
		}
		else {
			line[i]++;
		}
	}
}
