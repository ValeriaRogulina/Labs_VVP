#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B;

    printf("A = ");
    scanf_s("%d", &A);

    printf("B = ");
    scanf_s("%d", &B);

    if ((A > 2) & (B <= 3)) {
        printf("Неравенства справедливы (A > 2) & (B <= 3)");
    }
    else {
        printf("Неравенства несправедливы");
    }

    return 0;
}