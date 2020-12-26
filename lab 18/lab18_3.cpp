#include <stdio.h>

int main()
{
    int mas[20], N, i;

    printf("N = ");
    scanf_s("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("mas[%d] = ", i);
        scanf_s("%d", &mas[i]);
    }

    int k = 0;

    for (i = N; i > 0; i--) {
        if (mas[i] % 2 != 0) {
            k = mas[i];
            break;
        }
    }

    for (i = 1; i <= N; i++) {
        if (mas[i] % 2 != 0) {
            mas[i] += k;
        }
        printf("%d ", mas[i]);
    }

    return 0;
}