#include <stdio.h>

int main()
{
    int N, E, D;

    printf("N = ");
    scanf_s("%d", &N);

    E = N % 10;
    D = N / 10;

    N = (E * 10) + D;

    printf("N = %d\n", N);

    return 0;
}

