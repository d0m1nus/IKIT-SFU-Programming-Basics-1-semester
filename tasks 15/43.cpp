#include "pch.h"
#include <iostream>
#include <fstream>
#include <clocale>

using namespace std;

void reverse_uchar(iostream &ost) {
	ost.seekg(0, ios_base::end);

	int c = ost.tellg();
	unsigned char buf1, buf2;

	for (int i = 0; i < c / 2; i++) {
		ost.seekg(i, ios_base::beg);
		ost.read((char *)&buf1, sizeof(buf1));
		ost.seekg(-(i + 1), ios_base::end);
		ost.read((char *)&buf2, sizeof(buf2));
		ost.seekg(i, ios_base::beg);
		ost.write((char *)&buf2, sizeof(buf2));
		ost.seekg(-(i + 1), ios_base::end);
		ost.write((char *)&buf1, sizeof(buf1));
	}
}

int main() {
	setlocale(LC_ALL, "");

	fstream main_fout("main_fout.txt", ios::binary | ios::in | ios::out);
	fstream scndr_fout("scndr_fout.txt", ios::binary | ios::in | ios::out);

	unsigned char buf;

	cout << "Введите значения: " << endl;
	cout << "Чтобы закончить нажмите Ctrl + Z" << endl << endl;

	while (cin >> buf) {
		main_fout.write((char *)&buf, sizeof(buf));
		scndr_fout.write((char *)&buf, sizeof(buf));
	}

	reverse_uchar(main_fout);

	cout << "Пришло время проверить файлы!";
	main_fout.close();
	scndr_fout.close();
	return 0;
}
