#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B;

	printf("A > 0 и A > B. Введите A: ");
	scanf_s("%d", &A);

	printf("B > 0 и B < A. Введите B: ");
	scanf_s("%d", &B);

	while (A >= B) 
		A = A - B;
	
	printf("Остаток = %d", A);
	return 0;
}
