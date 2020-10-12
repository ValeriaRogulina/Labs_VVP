#include <stdio.h>
#include <math.h>

int main()
{
	float x1, y1, x2, y2, x3, y3; 

	printf("x1 = ");
	scanf_s("%f", &x1);
	printf("y1 = ");
	scanf_s("%f", &y1);

	printf("x2 = ");
	scanf_s("%f", &x2);
	printf("y2 = ");
	scanf_s("%f", &y2);

	printf("x3 = ");
	scanf_s("%f", &x3);
	printf("y3 = ");
	scanf_s("%f", &y3);

	float a, b, c, p, P, S;
	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));

	P = a + b + c;
	p = P / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));

	printf("P is %.3f\n", P);
	printf("S is %.3f\n", S);

	return 0;
}
