#include <stdio.h>
#include <math.h>

int main() 
{
	int d;
	float pi, L;

	pi = 3.14;

	printf("Enter d: ");
	scanf_s("%d", &d);

	L = pi * d;
	printf("L is %f\n", L);

	return 0;
}