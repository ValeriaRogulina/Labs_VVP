#include <stdio.h>
#include <math.h>

float RingS(float R1, float R2)
{
    float S, pi = 3.14;
    S = pi * (pow(R1, 2) - pow(R2, 2));
    return (S);
}

int main()
{
    int i;
    float r1, r2, s;
    for (i = 1; i <= 3; i++) {

        printf("R1 = ");
        scanf_s("%f", &r1);

        printf("R2 < R1.R2 = ");
        scanf_s("%f", &r2);

        s = RingS(r1, r2);

        printf("S = %f\n", s);
    }
    return 0;
}
