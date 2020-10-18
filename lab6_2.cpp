#include <stdio.h>

int main()
{
	int A, B, C, D;

	printf("A = ");
	scanf_s("%d", &A);

	printf("B = ");
	scanf_s("%d", &B);

	printf("C = ");
	scanf_s("%d", &C);

	D = A;
	A = C;
	C = B; 
	B = D;

	printf("A = %d\nB = %d\nC = %d\n", A, B, C);
	return 0;
}