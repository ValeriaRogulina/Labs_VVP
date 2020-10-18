#include <stdio.h>
#include <math.h>

int main () 
{
int A, B, C;

printf("A = ");
scanf_s("%d", &A);

printf("B = ");
scanf_s("%d", &B);

C = A;
A = B;
B = C;

printf("A = %d\n", A);
printf("B = %d\n", B);

return 0;
}