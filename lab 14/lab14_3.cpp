#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, K = 0, sum;

	printf("N > 1. Введите N: ");
	scanf_s("%d", &N);

	sum = (K + K * K) / 2;

	while (sum < N) {
		K++;
		sum = (K + K * K) / 2;
	}

	printf("K = %d", K);

	return 0;
}
