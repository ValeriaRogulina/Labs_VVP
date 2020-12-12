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

    int D = mas[1] - mas[0];

    for (i = 1; i < N; i++) {
        if ((mas[i] - mas[i - 1]) != D) {
            D = 0;
        }
    }

    printf("D = %d\n", D);

    return 0;
}