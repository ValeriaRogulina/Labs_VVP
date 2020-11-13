#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i;
	float A, s = 0, k;

	printf("N > 0. Введите N: ");
	scanf_s("%d", &N);

	printf("Введите A: ");
	scanf_s("%f", &A);

	for (i = 0; i <= N; i++) {
		k = pow(A, i);
		s = s + pow(-1, i) * k;
	}

	printf("Сумма = %f\n", s);

	return 0;
}
