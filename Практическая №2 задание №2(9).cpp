#include "pch.h"
#include <iostream>
#include <locale>

int main() {

	setlocale(LC_ALL, "Russian");

	int x1, x2, y1, y2;
	float S;

	printf("\nВведите координаты x1 и y1: ");
	scanf_s("%d%d", &x1, &y1);

	printf("\nВведите координаты x2 и y2: ");
	scanf_s("%d%d", &x2, &y2);

	S = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

	printf("\nРасстояние между точками: %g\n", S);
	printf("\n");

	return 0;
}