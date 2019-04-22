#include "pch.h"
#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	float num_people, num_seats, num_buses, num_free_seats;

	cout << "Введите количество людей: ";
	cin >> num_people;
	cout << "Введите количество мест в одном автобусе: ";
	cin >> num_seats;

	num_buses = ceil(num_people / num_seats);
	num_free_seats = (num_seats * num_buses) - num_people;

	cout << "Количество автобусов: " << num_buses << "\nКоличество свободных мест: " << num_free_seats << endl;
	return 0;
}
