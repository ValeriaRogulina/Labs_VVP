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

    if ((c*c == a*a + b*b) | (a*a == b*b + c*c) | (b*b == a*a + c*c)) {
        printf("Треугольник прямоугольный");
    }
    else {
        printf("Треугольник не прямоугольный");
    }

    return 0;
}
