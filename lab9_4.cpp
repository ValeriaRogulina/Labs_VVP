#include <stdio.h>

int main()
{
    int A, B, C, Kol, S;

    printf("A = ");
    scanf_s("%d", &A);

    printf("B = ");
    scanf_s("%d", &B);

    printf("C = ");
    scanf_s("%d", &C);

    Kol = (A / C) * (B / C);
    S = ((A % C) * (B - 1)) + ((B % C) * A);

    printf("Kol = %d\n", Kol);
    printf("S = %d\n", S);

    return 0;
}