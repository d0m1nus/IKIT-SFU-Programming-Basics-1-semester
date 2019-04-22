//Заменить каждую букву, непосредственно следующей за ней по алфавиту буквой ("z" на "а", "Z" на "A").
#include "pch.h"
#include <iostream>
#include <clocale>
#include <fstream>

using namespace std;

void string_conversion(char *line);

int main() {
	setlocale(LC_ALL, "rus");

	ifstream in("in.txt");
	ofstream out("out.txt");

	char line[255];

	if (!in.is_open()) {
		cout << "Файл не найден!\n";
	}
	else {
		while (in.getline(line, 255)) {
			string_conversion(line);
			out << line << endl;
		}
	}
	out.close();
	cout << "Проверьте файл" << endl;
	return 0;
}
void string_conversion(char *line) {
	for (; *line != '\0'; line++) {
		if ('a' <= *line && *line < 'z' || 'A' <= *line && *line < 'Z') {
			*line = ++*line;
		}
		else if (*line == 'z') {
			*line = 'a';
		}
		else if (*line == 'Z'){
			*line = 'A';
		}
	}
}
