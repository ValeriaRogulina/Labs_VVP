#include <stdio.h>
#include <math.h>

int main()
{
	int A1, B1, C1, A2, B2, C2, x, y, det;

	printf("A1 = ");
	scanf_s("%d", &A1);

	printf("B1 = ");
	scanf_s("%d", &B1);

	printf("C1 = ");
	scanf_s("%d", &C1);

	printf("A2 = ");
	scanf_s("%d", &A2);

	printf("B2 = ");
	scanf_s("%d", &B2);

	printf("C2 = ");
	scanf_s("%d", &C2);

	det = (A1 * B2) - (B1 * A2);
	

	if (det == 0) {
		printf("Result is undefined");
	}
	else if (det !=0) {
		x = ((C1 * B2) - (B1 * C2)) / det;
		y = ((A1 * C2) - (C1 * A2)) / det;
	}
	
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}