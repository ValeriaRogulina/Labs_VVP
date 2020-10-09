#include <stdio.h>
#include <math.h>

int main()
{
	int a1, a2, b1, b2, c1, c2;

	printf("a1 = ");
	scanf_s("%d", &a1);
	printf("a2 = ");
	scanf_s("%d", &a2);

	printf("b1 = ");
	scanf_s("%d", &b1);
	printf("b2 = ");
	scanf_s("%d", &b2);

	printf("c1 = ");
	scanf_s("%d", &c1);
	printf("c2 = ");
	scanf_s("%d", &c2);

	float AC, BC, sum;

	AC = sqrt(pow((c1 - a1), 2) + pow((c2 - a2), 2));
	BC = sqrt(pow((c1 - b1), 2) + pow((c2 - b2), 2));

	sum = AC + BC;

	printf("AC is %.3f\n", AC);
	printf("BC is %.3f\n", BC);
	printf("Sum is %.3f\n", sum);

	return 0;
}
