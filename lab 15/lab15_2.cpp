#include <stdio.h>

int SignX(float X)
{
    if (X < 0)
        X = -1;
    if (X == 0)
        X = 0;
    if (X > 0)
        X = 1;
    return (X);
}

int main()
{
    float A, B, C;

    printf("A = ");
    scanf_s("%f", &A);

    printf("B = ");
    scanf_s("%f", &B);

    C = SignX(A) + SignX(B);
    printf("A + B = %f\n", C);

    return 0;
}
