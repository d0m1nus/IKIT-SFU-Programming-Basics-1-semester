#include "pch.h"
#include <cstdio>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "Russian");

	long x, y, sum, multiply, diff;
	float average;

	printf("Введите целые числа x и y: ");
	scanf_s("%ld%ld", &x, &y);

	sum = x + y;
	multiply = x * y;
	diff = x - y;
	average = (x + y) / 2.0;

	//а)%d
	printf("\n Сумма чисел: %ld", sum);
	printf("\n Произведение чисел: %ld", multiply);
	printf("\n Разность чисел: %ld", diff);

	//б)%10d
	printf("\n Сумма чисел: %10ld", sum);
	printf("\n Произведение чисел: %10ld", multiply);
	printf("\n Разность чисел: %10ld", diff);

	//в)%-10d
	printf("\n Сумма чисел: %-10ld", sum);
	printf("\n Произведение чисел: %-10ld", multiply);
	printf("\n Разность чисел: %-10ld", diff);

	printf("\n Среднее арифметическое чисел: %f", average);//г)%f
	printf("\n Среднее арифметическое чисел: %15.4f", average);// )%15.4f
	printf("\n Среднее арифметическое чисел: %-15.4f", average);// )%-15.4f
	printf("\n Среднее арифметическое чисел: %0.15f", average);// )%0.15f
	printf("\n Среднее арифметическое чисел: %30.15f\n", average);// )%30.15f
	return 0;
}
