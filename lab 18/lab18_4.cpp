#include <stdio.h>

int main()
{
    int mas[20], N, i, k;
    int min = 1, max = 1;

    printf("N = ");
    scanf_s("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("mas[%d] = ", i);
        scanf_s("%d", &mas[i]);
    }

    for (i = N; i > 0; i--) {
        if (mas[i] > mas[max])
            max = i;
        if (mas[i] < mas[min])
            min = i;
    }

    if (max < min) {
        k = max;
        max = min;
        min = k;
    }

    for (i = min + 1; i < max; i++)
        mas[i] = 0;

    for (i = 1; i <= N; i++)
        printf("%d ", mas[i]);

    return 0;
}