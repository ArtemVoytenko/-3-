#define _CRT_SECURE_NO_DEPRECATE
#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
#define D 2.54
#define P 2.32166
#define C 2.7076

int z1();
int z2();
int z3();

int main()
{
	system("chcp 1251");
	setlocale(LC_ALL, "RUS");
	puts("МОЯ ПРОГРАММА");

	z1();
	z2();
	z3();
}

int z1()
{
	int num1;
	int num2;
	puts("введите число");
	scanf("%d", &num1);
	printf("Введено число %d\n", num1);
	puts("введите второе число");
	scanf("%d", &num2);
	printf("Сумма: %d\n", num2 + num1);
	printf("Разность: %d\n", num2 - num1);
	printf("Произведение: %d\n", num2 * num1);
	printf("Деление: %d\n", num2 / num1);
	printf("Остаток: %d\n", num2 % num1);
	return 0;
}

int z2()
{
	int dym;
	float result;
	printf("Введите значение для расчета: %d\n");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d дюймов - это %.1f см ", dym, result);
	result = P * dym;
	printf("%d испанских дюймов - это %.1f см ", dym, result);
	result = C * dym;
	printf("%d старолитовских дюймов - это %.1f см ", dym, result);
	return 0;
}

int z3()
{
	int a, b;
	puts("введите число a\n");
	scanf("%d", &a);
	puts("введите число b\n");
	scanf("%d", &b);
	printf("----------------------------------\n");
	printf("|%7s   |%7s   |%7s   |\n", "a*b", "a+b", "a-b");
	printf("----------------------------------\n");
	printf("|%5d*%-4d|%5d+%-4d|%5d-%-4d|\n", a, b, a, b, a, b);
	printf("----------------------------------\n");
	printf("|%7d   |%7d   |%7d   |\n", a * b, a + b, a - b);
	return 0;
}
