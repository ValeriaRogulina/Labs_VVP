#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int masA[20], masB[20], N, i, k;

    printf("N = ");
    scanf_s("%d", &N);

    printf("Исходный массив А:\n");

    for (i = 0; i < N; i++) {
        printf("masA[%d] = ", i);
        scanf_s("%d", &masA[i]);
    }

    printf("Исходный массив B:\n");

    for (i = 0; i < N; i++) {
        printf("masB[%d] = ", i);
        scanf_s("%d", &masB[i]);
    }

    for (i = 0; i < N; i++) {
        k = masA[i];
        masA[i] = masB[i];
        masB[i] = k;
    }

    printf("Преоразованный массив А:\n");
    for (i = 0; i < N; i++)
        printf("%d ", masA[i]);

    printf("\n");

    printf("Преоразованный массив B:\n");
    for (i = 0; i < N; i++)
        printf("%d ", masB[i]);

    return 0;
}
