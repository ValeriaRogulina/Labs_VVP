#include <stdio.h>
#include <math.h>

int main()
{
	float x1, x2, y1, y2;

	printf("x1 = ");
	scanf_s("%f", &x1); //Ввод координаты x1 
	printf("y1 = ");
	scanf_s("%f", &y1); //Ввод координаты y1

	printf("x2 = ");
	scanf_s("%f", &x2); //Ввод координаты x2
	printf("y2 = ");
	scanf_s("%f", &y2); //Ввод координаты y2

	float R;
	float x3 = x2 - x1; 
	float y3 = y2 - y1; 

	R = sqrt(pow(x3, 2) + pow(y3, 2)); //Вычисление расстояние между точками

	printf("R is %.3f\n", R); //Вывод результата

	return 0;
}
