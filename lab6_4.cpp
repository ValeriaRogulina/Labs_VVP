#include <stdio.h>
#include <math.h>

int main()
{
	float x, y;

	printf("x = ");
	scanf_s("%f", &x);

	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;

	printf("Y = %.3f\n", y);
	
	return 0;
}
