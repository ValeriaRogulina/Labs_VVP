#include <stdio.h>

int main()
{
    float A, B, C, sum;

    printf("A = ");
    scanf_s("%f", &A);

    printf("B = ");
    scanf_s("%f", &B);

    printf("C = ");
    scanf_s("%f", &C);

    if ((A <= B) & (A <= C)) {
        sum = B + C;
    }
    if ((B <= A) & (B <= C)) {
        sum = A + C;
    }
    if ((C <= B) & (C <= A)) {
        sum = B + A;
    }

    printf("sum = %.3f\n", sum);

    return 0;
}
