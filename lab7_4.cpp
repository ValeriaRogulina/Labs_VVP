
#include <stdio.h>
#include <math.h>

int main()
{
	float V1, V2, T, S;

	printf("V1 = ");
	scanf_s("%f", &V1);

	printf("V2 = ");
	scanf_s("%f", &V2);

	printf("S = ");
	scanf_s("%f", &S);

	printf("T = ");
	scanf_s("%f", &T);


	S = S + V1 * T + V2 * T;

	printf("S = %.3f\n", S);

	return 0;
}