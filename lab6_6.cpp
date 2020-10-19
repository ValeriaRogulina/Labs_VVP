#include <stdio.h>
#include <math.h>

int main()
{
	int A, A1;

	printf("A = ");
	scanf_s("%d", &A);

	A1 = A * A; //Возведение А в квадрат
	A1 = A1 * A1; //Возведение А в 4 степень
	A1 = A1 * A1; //Возведение А в 8 степень

	printf("A^8 = %d\n", A1);

	return 0;
}
