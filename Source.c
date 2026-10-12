#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	float U;
	float R;
	float I;
	printf("Введите напряжение U: ");
	scanf_s("%f", &U);
	printf("Введите сопротивление R: ");
	scanf_s("%f", &R);
	I = U / R;
	printf("Сила тока I: %f\n", I);
	return 0;
}