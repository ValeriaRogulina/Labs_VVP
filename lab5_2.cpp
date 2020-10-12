#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;

	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s("%d", &b);

	printf("c = ");
	scanf_s("%d", &c);

	int AC, BC, sum;

	AC = abs(c - a);
	BC = abs(c - b);
	sum = AC + BC;

	printf("AC is %d\n", AC);
	printf("BC is %d\n", BC);
	printf("Sum is %d\n", sum);

	return 0;
}
