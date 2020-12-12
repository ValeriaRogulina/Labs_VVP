#include <stdio.h>

int main()
{
	int K, L, i, sum = 0;
	float A = 0;
	int mas[] = { 1, 2, 3, 4, 5, 6, 7 };

	int N = sizeof(mas) / sizeof(int);

	printf("1<=K<=L. Enter K: ");
	scanf_s("%d", &K);

	printf("K<=L<=N. Enter L: ");
	scanf_s("%d", &L);

	for (i = K; i <= L; i++) {
		sum = sum + mas[i];
	}

	printf("Sum = %d\n", sum);

	A = (float)sum / (float)(L - K + 1);
	printf("Average = %.3f", A);

	return 0;
}

