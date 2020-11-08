#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;

    printf("N = ");
    scanf_s("%d", &N);

    if (N == 0)
        printf("нулевое число");
    else {
        if (N < 0)
            printf("отрицательное ");
        if (N > 0)
            printf("положительное ");
        if (N % 2 == 0)
            printf("чётное число");
        else printf("нечётное число");
    }

    return 0;
}
