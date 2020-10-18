#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;

	printf("x = ");
	scanf_s("%f", &x);

	y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3) + 2;

	printf("Y = %.3f\n", y);

	return 0;
}
