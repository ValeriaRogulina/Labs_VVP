#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int N;

    printf("1<=N<=999; N = ");
    scanf_s("%d", &N);

    if ((N % 2) == 0)
        printf("чётное ");
    else printf("нечётное ");

    if (N <= 9)
            printf("однозначное число");
    if ((10 <= N)&(N <= 99))
            printf("двузначное число");
    if ((100 <= N)&(N <= 999))
            printf("трёхзначное число");
    
    return 0;
}
