#include <stdio.h>
#include <math.h>

int main()
{
	float A, B, x;

	printf("A = ");
	scanf_s("%f", &A);

	printf("B = ");
	scanf_s("%f", &B);

	x = -B / A;

	printf("x = %.3f\n", x);

	return 0;
}