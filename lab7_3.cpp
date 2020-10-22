#include <stdio.h>
#include <math.h>

int main()
{
	float X, Y, kg1, A, S;

	printf("X = ");
	scanf_s("%f", &X);

	printf("Y = ");
	scanf_s("%f", &Y);

	printf("A = ");
	scanf_s("%f", &A);


	kg1 = A / X; //Цена 1 кг
	S = kg1 * Y; //Стоимость Y конфет 

	printf("kg1 = %.3f\n", kg1);
	printf("S = %.3f\n", S);

	return 0;
}