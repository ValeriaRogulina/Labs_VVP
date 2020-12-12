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

    for (i = 0; i < N - 1; i++) {
        if (mas[i] == mas[i + 1]) {
            printf("%d ", i);
            printf("%d\n", i+1);
        }
    }

    return 0;
}
