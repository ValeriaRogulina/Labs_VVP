#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, i, j;

	printf("A > 0. Введите A: ");
	scanf_s("%d", &A);

	printf("B > 0 и B > A. Введите B: ");
	scanf_s("%d", &B);

	for (i = A; i <= B; i++) {
		j = i;
		while (j > 0) {
			printf("%d ", i);
			j--;
		}
	}

	return 0;
}