#include <stdio.h>
#include <math.h>

int main() 
{
	float x, y, x1, y1, sum, mul, R, C;

	printf("Enter x: ");
	scanf_s("%f", &x);

	printf("Enter y: ");
	scanf_s("%f", &y);

	x1 = pow(x, 2);
	y1 = pow(y, 2);

	sum = x1 + y1;
	mul = x1 * y1;
	R = x1 > y1 ? x1 - y1 : y1 - x1;
	C = x1 > y1 ? x1 / y1 : y1 / x1;

	printf("sum is %.2f\n", sum);
	printf("mul is %.2f\n", mul);
	printf("R is %.2f\n", R);
	printf("C is %.2f\n", C);

	return 0;
}