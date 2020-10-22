#include <stdio.h>
#include <math.h>

int main()
{
	float a, pi = 3.14;

	printf("a = ");
	scanf_s("%f", &a);

	a = a * pi / 180; //Перевод в радианы

	printf("a = %f\n", a);

	return 0;
}