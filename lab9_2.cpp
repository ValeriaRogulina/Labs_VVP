#include <stdio.h>

int main()
{
    int K;

    printf("1<=K<=365, K = ");
    scanf_s("%d", &K);

    K = K % 7; //Делим К на кол-во дней в неделе, тк год начался с понедельника

    printf("K = %d\n", K);

    return 0;
}