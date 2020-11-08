#include <stdio.h>
#include <math.h>

int main()
{
    float Xa, Ya, Xb, Yb, Xc, Yc, Xac, Yac, Xab, Yab;
    float AC, AB;

    printf("Xa = ");
    scanf_s("%f", &Xa);
    printf("Ya = ");
    scanf_s("%f", &Ya);

    printf("Xb = ");
    scanf_s("%f", &Xb);
    printf("Yb = ");
    scanf_s("%f", &Yb);

    printf("Xc = ");
    scanf_s("%f", &Xc);
    printf("Yc = ");
    scanf_s("%f", &Yc);

    Xab = Xb - Xa;
    Yab = Yb - Ya;
    Xac = Xc - Xa;
    Yac = Yc - Ya;

    AC = sqrt(pow(Xac, 2) + pow(Yac, 2));
    AB = sqrt(pow(Xab, 2) + pow(Yab, 2));

    if (AB < AC) {
        printf("B = (%f;%f)\n", Xb, Yb);
        printf("AB = %f\n", AB);
    }
    else {
        printf("C = (%f;%f)\n", Xc, Yc);
        printf("AC = %f\n", AC);
    }

    return 0;
}
