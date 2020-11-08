#include <stdio.h>

int main()
{
    int A, B;

    printf("A = ");
    scanf_s("%d", &A);

    printf("B = ");
    scanf_s("%d", &B);

    if (A != B) {
        if (A > B)
            B = A;
        else A = B;
    }
    else {
        A = B = 0;
    }
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
