#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;

    printf("a = ");
    scanf_s("%d", &a);

    printf("b = ");
    scanf_s("%d", &b);

    printf("c = ");
    scanf_s("%d", &c);

    if ((a < (b + c)) & (b < (a + c)) & (c < (a + b))) {
        printf("Треугольник существует");
    }
    else {
        printf("Треугольник не существует");
    }

    return 0;
}
