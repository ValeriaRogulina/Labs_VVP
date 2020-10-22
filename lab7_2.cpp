#include <stdio.h>
#include <math.h>

int main()
{
	float a, pi = 3.14;

	printf("a = ");
	scanf_s("%f", &a);

	a = 180 * a / pi; //Перевод в градусы

	printf("a = %f\n", a);

	return 0;
}