#include <stdio.h>

int main()
{
    int A[20], N, i;

    printf("N = ");
    scanf_s("%d", &N);

    for (i = 0; i < N; i++) {
        printf("A[%d] = ", i);
        scanf_s("%d", &A[i]);
    }

    int min = A[0];

    for (i = 0; i < N; i+=2) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    printf("Min = %d\n", min);

    return 0;
}
