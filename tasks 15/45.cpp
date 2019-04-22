#include "pch.h"
#include <iostream>
#include <fstream>
#include <clocale>

using namespace std;

void uchar_replace(iostream &ost, unsigned char oldv, unsigned char newv) {
	ost.seekg(0, ios_base::beg);
	unsigned char buf;

	for (int i = 1; ost.read((char *)&buf, sizeof(buf)); i++) {
		if (buf == oldv) {
			ost.seekg(i - 1, ios_base::beg);
			ost.write((char *)&newv, sizeof(newv));
		}
		else {
			ost.seekg(i - 1, ios_base::beg);
			ost.write((char *)&buf, sizeof(buf));
		}
		ost.seekg(i, ios_base::beg);
	}
}

int main() {
	setlocale(LC_ALL, "");

	fstream main_fout("main_fout.txt", ios::binary | ios::in | ios::out);
	fstream scndr_fout("scndr_fout.txt", ios::binary | ios::in | ios::out);

	unsigned char buf, oldv, newv;

	cout << "Введите значение oldv: ";
	cin >> oldv;
	cout << "Введите значение newv: ";
	cin >> newv;

	cout << "Введите значения: " << endl;
	cout << "Чтобы закончить нажмите Ctrl + Z" << endl << endl;

	while (cin >> buf) {
		main_fout.write((char *)&buf, sizeof(buf));
		scndr_fout.write((char *)&buf, sizeof(buf));
	}

	uchar_replace(main_fout, oldv, newv);

	cout << "Пришло время проверить файл!";
	main_fout.close();
	scndr_fout.close();
	return 0;
}
