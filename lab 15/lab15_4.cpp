#include <stdio.h>
#include <locale.h>

int Quarter(float x, float y)
{
    int number = 0;
    if ((x > 0) & (y > 0)) 
        number = 1;
    else if ((x < 0) & (y > 0))
        number = 2;
    if ((x > 0) & (y < 0))
        number = 4;
    else if ((x < 0) & (y < 0))
        number = 3;

    return (number);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int i, num;
    float X, Y;
    for (i = 1; i <= 3; i++) {

        printf("x = ");
        scanf_s("%f", &X);

        printf("y = ");
        scanf_s("%f", &Y);

        num = Quarter(X, Y);

        printf("Номер координатной четверти - %d\n", num);
    }
    return 0;
}
