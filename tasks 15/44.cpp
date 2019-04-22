#include "pch.h"
#include <iostream>
#include <fstream>
#include <clocale>

using namespace std;

void uchar_add(std::iostream &ost, unsigned char v) {
	unsigned char buf, limit = 'я';

	ost.seekg(0, ios_base::beg);

	for (int i = 1; ost.read((char *)&buf, sizeof(buf)); i++) {
		buf += v;
		if (buf > 0xFF) {
			ost.seekg(i - 1, ios_base::beg);
			ost.write((char *)&limit, sizeof(limit));
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

	unsigned char buf;
	unsigned char v;

	cout << "Введите значение v: ";
	cin >> v;
	cout << "Введите значения: " << endl;
	cout << "Чтобы закончить нажмите Ctrl + Z" << endl << endl;

	while (cin >> buf) {
		main_fout.write((char *)&buf, sizeof(buf));
		scndr_fout.write((char *)&buf, sizeof(buf));
	}

	uchar_add(main_fout, v);

	cout << "Пришло время проверить файл!";
	main_fout.close();
	scndr_fout.close();
	return 0;
}
