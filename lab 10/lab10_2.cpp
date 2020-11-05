#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C;

    printf("A = ");
    scanf_s("%d", &A);

    printf("B = ");
    scanf_s("%d", &B);

    printf("C = ");
    scanf_s("%d", &C);

    if ((A < B)&(B < C)) {
        printf("Справедливо двойное неравенство (A < B < C)");
    }
    else {
        printf("Двойное неравенство несправедливо");
    }

    return 0;
}
