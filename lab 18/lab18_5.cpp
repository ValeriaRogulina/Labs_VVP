#include <stdio.h>

int main()
{
    int mas[20], N, i, k;

    printf("N = ");
    scanf_s("%d", &N);

    for (i = 0; i < N; i++) {
        printf("mas[%d] = ", i);
        scanf_s("%d", &mas[i]);
    }

    for (int i = 0; i < N - 1; i++)
    {
        if (mas[i] > mas[i + 1])
        {
            k = mas[i];
            mas[i] = mas[i + 1];
            mas[i + 1] = k;
        }
    }

    for (i = 0; i < N; i++)
        printf("%d ", mas[i]);

    return 0;
}
