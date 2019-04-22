#include "pch.h"
#include <iostream>
#include <fstream>
#include <clocale>

using namespace std;

void rev_lines(std::istream &ist, std::ostream &ost) {
	char main_str[255][255];
	int i = 0;
	while (ist.getline(main_str[i], 255)) {
		i++;
	}
	for (; i > 0; i--) {
		ost << main_str[i - 1];
		if (i - 1 != 0) {
			ost << endl;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "");
	ifstream ist("in.txt");
	ofstream ost("out.txt");
	if (!ist.is_open()) {
		cout << "файл \"in\" не найден";
		return -1;
	}
	rev_lines(ist, ost);
	cout << "Проверьте файл" << endl;
	return 0;
}
