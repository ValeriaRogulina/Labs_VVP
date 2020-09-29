#include <stdio.h>
#include <math.h>

int main() 
{
	int a, b;
	float Sr;

	printf("Enter a: ");
	scanf_s("%d", &a);

	printf("Enter b: ");
	scanf_s("%d", &b);

	Sr = (a + b) / 2;
	printf("Sr is %.2f\n", Sr);

	return 0;
}