#include <stdio.h>
#include <math.h>

int main()
{
	int A, A1, A2;

	printf("A = ");
	scanf_s("%d", &A);

	A1 = A * A; //Возведение А в квадрат
	A2 = A1 * A; //Возведение А в куб
	A2 = A2 * A1; //Возведение А в 5 степень
	A2 = A2 * A2 * A2; //Возведение А в 15 степень

	printf("A^15 = %d\n", A2);

	return 0;
}
