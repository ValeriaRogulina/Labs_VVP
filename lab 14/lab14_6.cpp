#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, A = 2, B = 1, C, K = 3;

	printf("N > 1. Введите N: ");
	scanf_s("%d", &N);

	while (N != A) {
		C = B;
		B = A;
		A = A + C;
		K++;
	}

	printf("Порядковый номер числа N = %d\n", K);

	return 0;
}
