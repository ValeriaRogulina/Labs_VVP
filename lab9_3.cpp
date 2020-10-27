#include <stdio.h>

int main()
{
    int K, N;

    printf("1<=K<=365, K = ");
    scanf_s("%d", &K);

    printf("1<=N<=7, N = ");
    scanf_s("%d", &N);

    K = (K - 1 + N - 1) % 7 + 1; 

    printf("K = %d\n", K);

    return 0;
}