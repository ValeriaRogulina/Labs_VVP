#include <stdio.h>
#include <math.h>

int main() 
{
	int a, b;

	printf("Enter a: ");
	scanf_s("%d", &a);

	printf("Enter b: ");
	scanf_s("%d", &b);

	int S, P;

	S = a * b;
	P = 2 * (a + b);

	printf("S is %d\n", S);
	printf("P is %d\n", P);

	return 0;
}