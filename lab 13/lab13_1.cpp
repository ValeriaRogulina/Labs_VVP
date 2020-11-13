#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	float N, i, n;

	printf("Введите цену за 1 кг конфет: ");
	scanf_s("%f", &N);

	for (i = 0.1; i <= 1.1; i += 0.1)
	{
		n = N * i;
		printf("%f кг = %f\n", i, n);
	}

	return 0;
}
