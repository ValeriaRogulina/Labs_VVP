#include <stdio.h>

int main()
{
    int N, E, D, C;

    printf("N = ");
    scanf_s("%d", &N);

    E = N % 10;
    D = (N / 10) % 10;
    C = N / 100;

    N = (D * 100) + (E * 10) + C;

    printf("N = %d\n", N);

    return 0;
}
