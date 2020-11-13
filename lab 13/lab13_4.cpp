#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i;
	float A, n = 0;

	printf("N > 0. Введите N: ");
	scanf_s("%d", &N);

	printf("Введите A: ");
	scanf_s("%f", &A);

	for (i = 0; i <= N; i ++) {
		n = n + pow(A, i);
	}

	printf("n = %f\n", n);

	return 0;
}
