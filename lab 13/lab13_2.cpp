#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	float n = 1, i;

	printf("N > 0. Введите N: ");
	scanf_s("%d", &N);

	for (i = 0; i <= N; i ++)
	{
		n = n * (1.0 + i / 10);
	}
		printf("n = %f\n", n);
	return 0;
}
