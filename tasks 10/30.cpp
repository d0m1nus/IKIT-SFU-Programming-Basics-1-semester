//Написать функцию std::size_t join(char *s_out, std::size_t len, const char **s_in, std::size_t n_in, const char *sep),
//которая соединяет n_in строк из массива строк s_in в одну строку s_out длины не более len символов, разделяя их строкой sep. 
//Если длина соединённой строки превышает len, строка обрезается до нужной длины. Строка s_out должна заканчиваться нулевым символом ('\0'). 
//Функция возвращает эффективную длину строки (до нулевого символа).
//Проверочные значения : s_in = { "Vasya", "Petya", "Masha", "Ivan Ivanovich" }, n_in = 4, sep = ", ", len = 40 ⇨ 
//s_out = "Vasya, Petya, Masha, Ivan Ivanovich", результат функции = 35.
#include "pch.h"
#include <iostream>
#include <clocale>

using namespace std;

size_t join(char *s_out, size_t len, char **s_in, size_t n_in, const char *sep) {
	int k = 0, len_sep = strlen(sep);
	for (size_t i = 0; i < n_in; i++) {
		for (size_t j = 0; j < strlen(s_in[i]) && k < len; j++, k++) {
			s_out[k] = s_in[i][j];
		}
		for (size_t l = 0; l < len_sep && k < len && i != n_in - 1; l++, k++) {
			s_out[k] = sep[l];
		}
	}
	s_out[k] = '\0';
	return k;
}

int main() {
	setlocale(LC_ALL, "");

	size_t n_in;
	cout << "Введите количество строк: ";
	cin >> n_in;

	char **s_in = new char *[n_in];
	for (size_t i = 0; i < n_in; i++) {
		s_in[i] = new char[255];
	}
	cin.get();
	cout << "Введите строки: " << endl;
	for (size_t i = 0; i < n_in; i++) {
		cin.getline(s_in[i], 255);
	}

	char sep[255];
	cout << "Введите строку-разделитель: ";
	cin.getline(sep, 255);

	size_t len;
	cout << "Введите len: ";
	cin >> len;
	char *s_out = new char[len];

	size_t ef_len = join(s_out, len, s_in, n_in, sep);

	cout << "Новая строка: " << s_out << " содержит " << ef_len << " символ(ов)" << endl;

	return 0;
}
