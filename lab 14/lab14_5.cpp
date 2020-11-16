#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B;

	printf("A > 0. Введите А: ");
	scanf_s("%d", &A);

	printf("B > 0. Введите B: ");
	scanf_s("%d", &B);

	while (A != B) {
		if (A > B)
			A = A - B;
		else B = B - A;
	}

	printf("НОД A и B = %d\n", A);

	return 0;
}
