#include <stdio.h>

int main()
{
    int N, S;

    printf("N = ");
    scanf_s("%d", &N);

    S = N % 60; 

    printf("S = %d\n", S);

    return 0;
}