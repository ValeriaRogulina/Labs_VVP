#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, a1, a2, a3, a4;

    printf("A = ");
    scanf_s("%d", &A);

    a1 = A / 1000;
    a2 = (A % 1000) / 100;
    a3 = (A % 100) / 10;
    a4 = A % 10;

    if ((a1 == a4) & (a2 == a3)) {
        printf("Число является палиндромом");
    }
    else {
        printf("Число не является палиндромом");
    }

    return 0;
}
