#include "pch.h"
#include <iostream>
#include <clocale>

int main() {

	setlocale(LC_ALL, "Russian");

	float dollar_course, euro_course, ruble_sum, dollar, euro;
	printf("Введите курс доллара:");
	scanf_s("%g", &dollar_course);

	printf("\nВведите курс евро:");
	scanf_s("%g", &euro_course);

	printf("\nВведите рублёвую сумму:");
	scanf_s("%g", &ruble_sum);

	dollar = ruble_sum / dollar_course;
	euro = ruble_sum / euro_course;

	printf("\nНа данную сумму можно купить: %g", dollar);
	printf(" долларов");
	printf("\nНа данную сумму можно купить: %g", euro);
	printf(" евро\n");
	return 0;
}