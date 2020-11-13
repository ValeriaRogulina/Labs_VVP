#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, n = 0, i;

	printf("N > 0. Введите N: ");
	scanf_s("%d", &N);

	for (i = 1; i <= (2*N - 1); i+=2) {
		n = n + i;
		printf("n = %d\n", n);
	}

	return 0;
}
