#include <stdio.h>
#include <math.h>

int main()
{
	int x1, y1, x2, y2, AB, AD; //Введём переменные, (x1, y1) - координаты точки А, а 
	//противоположная ей точка С с координатами (x2, y2), AB - сторона парал-ая Oy, AD - сторона парал-ая Ox.

	printf("x1 = ");
	scanf_s("%d", &x1);  
	printf("y1 = ");
	scanf_s("%d", &y1); 

	printf("x2 = ");
	scanf_s("%d", &x2); 
	printf("y2 = ");
	scanf_s("%d", &y2); 

	int P, S;
	AB = abs(y2 - y1);  
	AD = abs(x2 - x1);  

	P = 2 * (AD + AB);
	S = AB * AD;

	printf("P is %d\n", P); 
	printf("S is %d\n", S);

	return 0;
}
