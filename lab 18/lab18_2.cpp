#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int masA[20], N, i, K, sum = 0;
    float A;

    printf("N = ");
    scanf_s("%d", &N);

    printf("Mассив А:\n");

    for (i = 1; i <= N; i++) {
        printf("masA[%d] = ", i);
        scanf_s("%d", &masA[i]);
    }

    printf("Введите К = ");
    scanf_s("%d", &K);

    for (i = 1; i <= K; i++) {
        sum = sum + masA[i];
    }

    A = (float)sum / (float)(K);

    printf("Преоразованный массив B:\n");
    for (i = 1; i <= N; i++) {
        if (i == K)
            printf("%.2f ", A);
        else
            printf("%d ", masA[i]);
    }

    return 0;
}
