#include <stdio.h>

int main()
{
    int A, B, N;

    printf("A = ");
    scanf_s("%d", &A);

    printf("B = ");
    scanf_s("%d", &B);

    N = A % B;

    printf("N = %d\n", N);

    return 0;
}
