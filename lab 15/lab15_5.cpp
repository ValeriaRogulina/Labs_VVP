#include <stdio.h>

float Fact2(int N)
{
    float k = 0;
    float Nfact = 1;
    if (N % 2 != 0) {
        for (k = 1; k <= N; k += 2)
            Nfact = Nfact * k;
    }
    else {
        for (k = 2; k <= N; k += 2)
            Nfact = Nfact * k;
    }
    return (Nfact);
}

int main()
{
    float n, N2; 
    {

        printf("N = ");
        scanf_s("%f", &n);

        N2 = Fact2(n);

        printf("N!! = %f\n", N2);
    }
    return 0;
}
