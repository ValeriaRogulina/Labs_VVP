#include <stdio.h>

int main()
{
    int K;

    printf("1<=K<=365, K = ");
    scanf_s("%d", &K);

    K = K % 7; //Номер дня определяется как остаток от деления К на 7, тк год начинается с понедельника

    printf("K = %d\n", K);

    return 0;
}