#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    float X, Y;

    printf("X = ");
    scanf_s("%f", &X);
    printf("Y = ");
    scanf_s("%f", &Y);

    if ((X > 0)&(Y > 0)) 
        printf("Точка лежит в 1 координатной четверти");
    if ((X < 0) & (Y > 0))
        printf("Точка лежит во 2 координатной четверти");
    if ((X < 0) & (Y < 0))
        printf("Точка лежит в 3 координатной четверти");
    if ((X > 0) & (Y < 0))
        printf("Точка лежит в 4 координатной четверти");

    return 0;
}
