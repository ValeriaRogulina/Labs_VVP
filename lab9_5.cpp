#include <stdio.h>

int main()
{
    int Year, S;

    printf("Year = ");
    scanf_s("%d", &Year);

    S = Year / 100 + 1;

    printf("S = %d\n", S);

    return 0;
}