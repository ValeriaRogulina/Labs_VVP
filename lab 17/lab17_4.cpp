#include <stdio.h>

int main()
{
    int mas[20], N, i;

    printf("N = ");
    scanf_s("%d", &N);

    for (i = 0; i < N; i++) {
        printf("mas[%d] = ", i);
        scanf_s("%d", &mas[i]);
    }

    if (mas[N - 1] > mas[N - 2]) {
        printf("Number = %d\n", N);
    }
    else {
        i = N - 2;
        while ((i >= 1) && (mas[i] <= mas[i - 1]) && (mas[i] <= mas[i + 1])) {
            i--;
        }

        printf("%i \n", i);
    }
    return 0;
}