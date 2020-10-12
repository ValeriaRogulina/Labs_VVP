#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;

	printf("a = ");
	scanf_s("%d", &a); //Ввод координаты точки A

	printf("b = ");
	scanf_s("%d", &b); //Ввод координаты точки B

	printf("c = ");
	scanf_s("%d", &c); //Ввод координаты точки C

	int AC, BC, mul;

	AC = abs(c - a); //Вычисление длины отрезка AC
	BC = abs(c - b); //Вычисление длины отрезка BC
	mul = AC * BC;

	printf("AC is %d\n", AC);
	printf("BC is %d\n", BC);
	printf("Multiplication is %d\n", mul);

	return 0;
}
