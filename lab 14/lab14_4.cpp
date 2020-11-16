#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int K = 0;
	float S = 1000, P;

	printf("0 < P < 25 Введите проценты P: ");
	scanf_s("%f", &P);

	while (S <= 1100) {
		K++;
		S = S + S * (P/100);
	}

	printf("Кол-во месяцев = %d\n", K);
	printf("Итоговый размер вклада = %.2f\n", S);

	return 0;
}
