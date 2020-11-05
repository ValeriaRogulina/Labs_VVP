#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    int A;

    printf("A = ");
    scanf_s("%d", &A);

    if ((A % 2 == 0) & (A < 100)) {
        printf("A - чётное двузначное число");
    }
    else {
        printf("A не является чётным и двузначным");
    }

    return 0;
}
