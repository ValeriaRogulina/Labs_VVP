#include <stdio.h>

float PoweraA3(float A)
{
    float B;
    B = A* A * A;
    return (B);
}

int main()
{
    int i;
    float a, b;
    for (i = 1; i <= 5; i++) {

        printf("A = ");
        scanf_s("%f", &a);

        b = PoweraA3(a);

        printf("B = %f\n", b);
    }
    return 0;
}